
std_msgs/Header header               # Standard metadata for higher-level stamped data types.
                                     # * header.seq holds the number of requests since the plugin started
                                     # * header.stamp timestamp related to the pose
                                     # * header.frame_id not used but currently filled with the relative_entity_name
geometry_msgs/Pose pose              # pose of model in relative entity frame
geometry_msgs/Twist twist            # twist of model in relative entity frame
bool success                         # return true if get successful
string status_message                # comments if available
