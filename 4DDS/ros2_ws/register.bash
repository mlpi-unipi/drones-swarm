timestamp=$(date +%s)
ros2 bag record -o "log_$timestamp" /swarm/geopings /target_position
