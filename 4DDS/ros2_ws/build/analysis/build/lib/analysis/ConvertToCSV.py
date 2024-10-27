import rclpy
from rclpy.node import Node
from rosbag2_py import SequentialReader, StorageOptions, ConverterOptions
from rclpy.serialization import deserialize_message
from rosidl_runtime_py.utilities import get_message
import importlib
import csv
import sys

class BagReaderNode(Node):
    def __init__(self, bag_file_path):
        super().__init__('minimal_node') # type: ignore

        # Set up storage options and converter options
        storage_options = StorageOptions(uri=bag_file_path, storage_id='sqlite3')
        converter_options = ConverterOptions(input_serialization_format='cdr', output_serialization_format='cdr')
        
        # Create a SequentialReader
        self.reader = SequentialReader()
        self.reader.open(storage_options, converter_options)

        # Create CSV writers
        self.geopings_file = open('geopings.csv', mode='w', newline='')
        self.target_position_file = open('target_position.csv', mode='w', newline='')
        self.geopings_writer = csv.writer(self.geopings_file)
        self.target_position_writer = csv.writer(self.target_position_file)

        # Write headers to CSV files
        self.geopings_writer.writerow(['timestamp', 'vehicle_id', 'longitude_m', 'latitude_m', 'speed_north_m_s', 'speed_east_m_s'])
        self.target_position_writer.writerow(['timestamp', 'vehicle_id', 'longitude_m', 'latitude_m'])
        
        # Read messages from the bag file
        while self.reader.has_next():
            topic, data, t = self.reader.read_next()
            message_type = self.get_message_type(topic)
            if message_type:
                message = self.deserialize_message(data, message_type)
                timestamp = t
                
                if topic == '/swarm/geopings':
                    self.geopings_writer.writerow([timestamp, message.vehicle_id, message.longitude_m, message.latitude_m, message.speed_north_m_s, message.speed_east_m_s])
                elif topic == '/target_position':
                    self.target_position_writer.writerow([timestamp, message.vehicle_id, message.longitude_m, message.latitude_m])
        
        # Close CSV files
        self.geopings_file.close()
        self.target_position_file.close()
        
        sys.exit(0)
    
    def get_message_type(self, topic):
        topic_type_mapping = {
            '/swarm/geopings': 'fdds_messages/msg/GeoPing',
            '/target_position': 'fdds_messages/msg/GeoPing'
        }

        return topic_type_mapping.get(topic, None)

    def deserialize_message(self, data, message_type):
        # Import the message class dynamically
        package_name, message_subfolder, message_name = message_type.split('/')
        module = importlib.import_module(f'{package_name}.{message_subfolder}')
        message_class = getattr(module, message_name)

        msg = deserialize_message(data, message_class)
        return msg

def main(args=None):
    rclpy.init(args=args)
    bag_file_path = sys.argv[1]
    node = BagReaderNode(bag_file_path)
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
