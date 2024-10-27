# Deprecated, kept for ROS 1 bridge.
# Use GetEntityState
string model_name                    # name of Gazebo Model
string relative_entity_name          # return pose and twist relative to this entity
                                     # an entity can be a model, body, or geom
                                     # be sure to use gazebo scoped naming notation (e.g. [model_name::body_name])
                                     # leave empty or "world" will use inertial world frame
