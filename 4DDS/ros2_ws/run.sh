#!/bin/bash

# Function to show usage
usage() {
    echo "Usage: $0 -n <number_of_vehicles>"
    exit 1
}

num_vehicles=5

# Parse command line arguments
while getopts "n:" opt; do
    case "$opt" in
        n) num_vehicles=$OPTARG ;;
        *) usage ;;
    esac
done


ros2 run base_station BaseStation $num_vehicles &
ros2 run drone Drone $num_vehicles
