
std_msgs/Header header               # Standard metadata for higher-level stamped data types.
                                     # * header.stamp Timestamp related to the pose.
                                     # * header.frame_id Filled with the relative_frame.
gazebo_msgs/EntityState state        # Contains pose and twist.
bool success                         # Return true if get was successful. If false, the state contains garbage.
