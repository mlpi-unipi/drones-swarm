# Set joint positions for a model
string model_name           # model to set state
string urdf_param_name      # UNUSED

string[] joint_names        # list of joints to set positions.  if joint is not listed here, preserve current position.
float64[] joint_positions   # set to this position.
