#!/bin/bash

# Function to show usage
usage() {
    echo "Usage: $0 -n <number_of_vehicles> -m <vehicle_name>"
    exit 1
}

num_vehicles=5
vehicle_name="drone"  # Default vehicle name

# Parse command line arguments
while getopts "n:m:" opt; do
    case "$opt" in
        n) num_vehicles=$OPTARG ;;
        m) vehicle_name=$OPTARG ;;
        *) usage ;;
    esac
done

# Run the base station and drone
ros2 run base_station BaseStation $num_vehicles &
ros2 run drone Drone $num_vehicles $vehicle_name
