# Deprecated, kept for ROS 1 bridge.
# Use GetEntityState
string link_name          # name of link
                          # link names are prefixed by model name, e.g. pr2::base_link
string reference_frame    # reference frame of returned information, must be a valid link
                          # if empty, use inertial (gazebo world) frame
                          # reference_frame names are prefixed by model name, e.g. pr2::base_link
