# generated from
# ament_cmake_core/cmake/symlink_install/ament_cmake_symlink_install.cmake.in

# create empty symlink install manifest before starting install step
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt")

#
# Reimplement CMake install(DIRECTORY) command to use symlinks instead of
# copying resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_directory cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "DIRECTORY;PATTERN;PATTERN_EXCLUDE" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_directory() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/fourdds/ros2_ws/install/px4_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # default pattern to include
  if(NOT ARG_PATTERN)
    set(ARG_PATTERN "*")
  endif()

  # iterate over directories
  foreach(dir ${ARG_DIRECTORY})
    # make dir an absolute path
    if(NOT IS_ABSOLUTE "${dir}")
      set(dir "${cmake_current_source_dir}/${dir}")
    endif()

    if(EXISTS "${dir}")
      # if directory has no trailing slash
      # append folder name to destination
      set(destination "${ARG_DESTINATION}")
      string(LENGTH "${dir}" length)
      math(EXPR offset "${length} - 1")
      string(SUBSTRING "${dir}" ${offset} 1 dir_last_char)
      if(NOT dir_last_char STREQUAL "/")
        get_filename_component(destination_name "${dir}" NAME)
        set(destination "${destination}/${destination_name}")
      else()
        # remove trailing slash
        string(SUBSTRING "${dir}" 0 ${offset} dir)
      endif()

      # glob recursive files
      set(relative_files "")
      foreach(pattern ${ARG_PATTERN})
        file(
          GLOB_RECURSE
          include_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT include_files STREQUAL "")
          list(APPEND relative_files ${include_files})
        endif()
      endforeach()
      foreach(pattern ${ARG_PATTERN_EXCLUDE})
        file(
          GLOB_RECURSE
          exclude_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT exclude_files STREQUAL "")
          list(REMOVE_ITEM relative_files ${exclude_files})
        endif()
      endforeach()
      list(SORT relative_files)

      foreach(relative_file ${relative_files})
        set(absolute_file "${dir}/${relative_file}")
        # determine link name for file including destination path
        set(symlink "${destination}/${relative_file}")

        # ensure that destination exists
        get_filename_component(symlink_dir "${symlink}" PATH)
        if(NOT EXISTS "${symlink_dir}")
          file(MAKE_DIRECTORY "${symlink_dir}")
        endif()

        _ament_cmake_symlink_install_create_symlink("${absolute_file}" "${symlink}")
      endforeach()
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_directory() can't find '${dir}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(FILES) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_files cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION;RENAME" "FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/fourdds/ros2_ws/install/px4_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  if(ARG_RENAME)
    list(LENGTH ARG_FILES file_count)
    if(NOT file_count EQUAL 1)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "RENAME argument but not with a single file")
    endif()
  endif()

  # iterate over files
  foreach(file ${ARG_FILES})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      if(NOT ARG_RENAME)
        set(symlink "${ARG_DESTINATION}/${filename}")
      else()
        set(symlink "${ARG_DESTINATION}/${ARG_RENAME}")
      endif()
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_files() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(PROGRAMS) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_programs cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "PROGRAMS" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_programs() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/fourdds/ros2_ws/install/px4_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # iterate over programs
  foreach(file ${ARG_PROGRAMS})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${ARG_DESTINATION}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_programs() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(TARGETS) command to use symlinks instead of copying
# resources.
#
# :param TARGET_FILES: the absolute files, replacing the name of targets passed
#   in as TARGETS
# :type TARGET_FILES: list of files
# :param ARGN: the same arguments as the CMake install command except that
#   keywords identifying the kind of type and the DESTINATION keyword must be
#   joined with an underscore, e.g. ARCHIVE_DESTINATION.
# :type ARGN: various
#
function(ament_cmake_symlink_install_targets)
  cmake_parse_arguments(ARG "OPTIONAL" "ARCHIVE_DESTINATION;DESTINATION;LIBRARY_DESTINATION;RUNTIME_DESTINATION"
    "TARGETS;TARGET_FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_targets() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # iterate over target files
  foreach(file ${ARG_TARGET_FILES})
    if(NOT IS_ABSOLUTE "${file}")
      message(FATAL_ERROR "ament_cmake_symlink_install_targets() target file "
        "'${file}' must be an absolute path")
    endif()

    # determine destination of file based on extension
    set(destination "")
    get_filename_component(fileext "${file}" EXT)
    if(fileext STREQUAL ".a" OR fileext STREQUAL ".lib")
      set(destination "${ARG_ARCHIVE_DESTINATION}")
    elseif(fileext STREQUAL ".dylib" OR fileext MATCHES "\\.so(\\.[0-9]+)?(\\.[0-9]+)?(\\.[0-9]+)?$")
      set(destination "${ARG_LIBRARY_DESTINATION}")
    elseif(fileext STREQUAL "" OR fileext STREQUAL ".dll" OR fileext STREQUAL ".exe")
      set(destination "${ARG_RUNTIME_DESTINATION}")
    endif()
    if(destination STREQUAL "")
      set(destination "${ARG_DESTINATION}")
    endif()

    # make destination an absolute path and ensure that it exists
    if(NOT IS_ABSOLUTE "${destination}")
      set(destination "/home/fourdds/ros2_ws/install/px4_msgs/${destination}")
    endif()
    if(NOT EXISTS "${destination}")
      file(MAKE_DIRECTORY "${destination}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${destination}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_targets() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

function(_ament_cmake_symlink_install_create_symlink absolute_file symlink)
  # register symlink for being removed during install step
  file(APPEND "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt"
    "${symlink}\n")

  # avoid any work if correct symlink is already in place
  if(EXISTS "${symlink}" AND IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    get_filename_component(real_absolute_file "${absolute_file}" REALPATH)
    if(destination STREQUAL real_absolute_file)
      message(STATUS "Up-to-date symlink: ${symlink}")
      return()
    endif()
  endif()

  message(STATUS "Symlinking: ${symlink}")
  if(EXISTS "${symlink}" OR IS_SYMLINK "${symlink}")
    file(REMOVE "${symlink}")
  endif()

  execute_process(
    COMMAND "/usr/bin/cmake" "-E" "create_symlink"
      "${absolute_file}"
      "${symlink}"
  )
  # the CMake command does not provide a return code so check manually
  if(NOT EXISTS "${symlink}" OR NOT IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    message(FATAL_ERROR
      "Could not create symlink '${symlink}' pointing to '${absolute_file}'")
  endif()
endfunction()

# end of template

message(STATUS "Execute custom install script")

# begin of custom install code

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/px4_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/px4_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")

# install(DIRECTORY "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_generator_c/px4_msgs/" "DESTINATION" "include/px4_msgs/px4_msgs" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/home/fourdds/ros2_ws/src/px4_msgs" DIRECTORY "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_generator_c/px4_msgs/" "DESTINATION" "include/px4_msgs/px4_msgs" "PATTERN" "*.h")

# install(FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/px4_msgs/environment")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/px4_msgs/environment")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/px4_msgs/environment")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/px4_msgs/environment")

# install(DIRECTORY "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_typesupport_fastrtps_c/px4_msgs/" "DESTINATION" "include/px4_msgs/px4_msgs" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/home/fourdds/ros2_ws/src/px4_msgs" DIRECTORY "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_typesupport_fastrtps_c/px4_msgs/" "DESTINATION" "include/px4_msgs/px4_msgs" "PATTERN_EXCLUDE" "*.cpp")

# install(DIRECTORY "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_generator_cpp/px4_msgs/" "DESTINATION" "include/px4_msgs/px4_msgs" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/home/fourdds/ros2_ws/src/px4_msgs" DIRECTORY "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_generator_cpp/px4_msgs/" "DESTINATION" "include/px4_msgs/px4_msgs" "PATTERN" "*.hpp")

# install(DIRECTORY "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_typesupport_fastrtps_cpp/px4_msgs/" "DESTINATION" "include/px4_msgs/px4_msgs" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/home/fourdds/ros2_ws/src/px4_msgs" DIRECTORY "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_typesupport_fastrtps_cpp/px4_msgs/" "DESTINATION" "include/px4_msgs/px4_msgs" "PATTERN_EXCLUDE" "*.cpp")

# install(DIRECTORY "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_typesupport_introspection_c/px4_msgs/" "DESTINATION" "include/px4_msgs/px4_msgs" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/home/fourdds/ros2_ws/src/px4_msgs" DIRECTORY "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_typesupport_introspection_c/px4_msgs/" "DESTINATION" "include/px4_msgs/px4_msgs" "PATTERN" "*.h")

# install(DIRECTORY "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_typesupport_introspection_cpp/px4_msgs/" "DESTINATION" "include/px4_msgs/px4_msgs" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/home/fourdds/ros2_ws/src/px4_msgs" DIRECTORY "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_typesupport_introspection_cpp/px4_msgs/" "DESTINATION" "include/px4_msgs/px4_msgs" "PATTERN" "*.hpp")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/px4_msgs/environment")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/px4_msgs/environment")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/px4_msgs/environment")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/px4_msgs/environment")

# install(DIRECTORY "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_python/px4_msgs/px4_msgs.egg-info/" "DESTINATION" "local/lib/python3.10/dist-packages/px4_msgs-2.0.1-py3.10.egg-info")
ament_cmake_symlink_install_directory("/home/fourdds/ros2_ws/src/px4_msgs" DIRECTORY "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_python/px4_msgs/px4_msgs.egg-info/" "DESTINATION" "local/lib/python3.10/dist-packages/px4_msgs-2.0.1-py3.10.egg-info")

# install(DIRECTORY "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_generator_py/px4_msgs/" "DESTINATION" "local/lib/python3.10/dist-packages/px4_msgs" "PATTERN_EXCLUDE" "*.pyc" "PATTERN_EXCLUDE" "__pycache__")
ament_cmake_symlink_install_directory("/home/fourdds/ros2_ws/src/px4_msgs" DIRECTORY "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_generator_py/px4_msgs/" "DESTINATION" "local/lib/python3.10/dist-packages/px4_msgs" "PATTERN_EXCLUDE" "*.pyc" "PATTERN_EXCLUDE" "__pycache__")

# install("TARGETS" "px4_msgs__rosidl_typesupport_fastrtps_c__pyext" "DESTINATION" "local/lib/python3.10/dist-packages/px4_msgs")
include("/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_symlink_install_targets_0_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "px4_msgs__rosidl_typesupport_introspection_c__pyext" "DESTINATION" "local/lib/python3.10/dist-packages/px4_msgs")
include("/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_symlink_install_targets_1_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "px4_msgs__rosidl_typesupport_c__pyext" "DESTINATION" "local/lib/python3.10/dist-packages/px4_msgs")
include("/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_symlink_install_targets_2_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ActionRequest.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ActionRequest.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ActuatorArmed.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ActuatorArmed.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ActuatorControlsStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ActuatorControlsStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ActuatorMotors.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ActuatorMotors.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ActuatorOutputs.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ActuatorOutputs.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ActuatorServos.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ActuatorServos.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ActuatorServosTrim.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ActuatorServosTrim.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ActuatorTest.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ActuatorTest.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/AdcReport.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/AdcReport.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Airspeed.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Airspeed.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/AirspeedValidated.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/AirspeedValidated.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/AirspeedWind.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/AirspeedWind.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ArmingCheckReply.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ArmingCheckReply.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ArmingCheckRequest.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ArmingCheckRequest.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/AutotuneAttitudeControlStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/AutotuneAttitudeControlStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/BatteryStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/BatteryStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Buffer128.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Buffer128.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ButtonEvent.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ButtonEvent.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/CameraCapture.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/CameraCapture.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/CameraStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/CameraStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/CameraTrigger.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/CameraTrigger.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/CanInterfaceStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/CanInterfaceStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/CellularStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/CellularStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/CollisionConstraints.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/CollisionConstraints.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/CollisionReport.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/CollisionReport.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ConfigOverrides.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ConfigOverrides.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ControlAllocatorStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ControlAllocatorStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Cpuload.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Cpuload.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DatamanRequest.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DatamanRequest.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DatamanResponse.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DatamanResponse.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DebugArray.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DebugArray.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DebugKeyValue.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DebugKeyValue.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DebugValue.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DebugValue.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DebugVect.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DebugVect.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DifferentialDriveSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DifferentialDriveSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DifferentialPressure.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DifferentialPressure.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DistanceSensor.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/DistanceSensor.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Ekf2Timestamps.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Ekf2Timestamps.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EscReport.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EscReport.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EscStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EscStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorAidSource1d.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorAidSource1d.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorAidSource2d.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorAidSource2d.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorAidSource3d.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorAidSource3d.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorBias.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorBias.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorBias3d.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorBias3d.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorEventFlags.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorEventFlags.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorGpsStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorGpsStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorInnovations.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorInnovations.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorSelectorStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorSelectorStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorSensorBias.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorSensorBias.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorStates.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorStates.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorStatusFlags.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/EstimatorStatusFlags.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Event.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Event.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/FailsafeFlags.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/FailsafeFlags.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/FailureDetectorStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/FailureDetectorStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/FigureEightStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/FigureEightStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/FlightPhaseEstimation.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/FlightPhaseEstimation.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/FollowTarget.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/FollowTarget.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/FollowTargetEstimator.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/FollowTargetEstimator.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/FollowTargetStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/FollowTargetStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GeneratorStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GeneratorStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GeofenceResult.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GeofenceResult.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GeofenceStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GeofenceStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GimbalControls.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GimbalControls.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GimbalDeviceAttitudeStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GimbalDeviceAttitudeStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GimbalDeviceInformation.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GimbalDeviceInformation.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GimbalDeviceSetAttitude.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GimbalDeviceSetAttitude.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GimbalManagerInformation.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GimbalManagerInformation.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GimbalManagerSetAttitude.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GimbalManagerSetAttitude.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GimbalManagerSetManualControl.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GimbalManagerSetManualControl.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GimbalManagerStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GimbalManagerStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GotoSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GotoSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GpioConfig.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GpioConfig.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GpioIn.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GpioIn.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GpioOut.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GpioOut.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GpioRequest.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GpioRequest.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GpsDump.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GpsDump.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GpsInjectData.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/GpsInjectData.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Gripper.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Gripper.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/HealthReport.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/HealthReport.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/HeaterStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/HeaterStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/HomePosition.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/HomePosition.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/HoverThrustEstimate.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/HoverThrustEstimate.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/InputRc.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/InputRc.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/InternalCombustionEngineStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/InternalCombustionEngineStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/IridiumsbdStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/IridiumsbdStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/IrlockReport.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/IrlockReport.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/LandingGear.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/LandingGear.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/LandingGearWheel.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/LandingGearWheel.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/LandingTargetInnovations.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/LandingTargetInnovations.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/LandingTargetPose.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/LandingTargetPose.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/LaunchDetectionStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/LaunchDetectionStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/LedControl.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/LedControl.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/LogMessage.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/LogMessage.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/LoggerStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/LoggerStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/MagWorkerData.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/MagWorkerData.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/MagnetometerBiasEstimate.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/MagnetometerBiasEstimate.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ManualControlSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ManualControlSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ManualControlSwitches.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ManualControlSwitches.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/MavlinkLog.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/MavlinkLog.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/MavlinkTunnel.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/MavlinkTunnel.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/MessageFormatRequest.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/MessageFormatRequest.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/MessageFormatResponse.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/MessageFormatResponse.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Mission.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Mission.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/MissionResult.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/MissionResult.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ModeCompleted.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ModeCompleted.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/MountOrientation.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/MountOrientation.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/NavigatorMissionItem.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/NavigatorMissionItem.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/NormalizedUnsignedSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/NormalizedUnsignedSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/NpfgStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/NpfgStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ObstacleDistance.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ObstacleDistance.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/OffboardControlMode.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/OffboardControlMode.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/OnboardComputerStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/OnboardComputerStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/OrbTest.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/OrbTest.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/OrbTestLarge.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/OrbTestLarge.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/OrbTestMedium.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/OrbTestMedium.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/OrbitStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/OrbitStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ParameterResetRequest.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ParameterResetRequest.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ParameterSetUsedRequest.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ParameterSetUsedRequest.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ParameterSetValueRequest.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ParameterSetValueRequest.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ParameterSetValueResponse.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ParameterSetValueResponse.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ParameterUpdate.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/ParameterUpdate.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Ping.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Ping.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/PositionControllerLandingStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/PositionControllerLandingStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/PositionControllerStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/PositionControllerStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/PositionSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/PositionSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/PositionSetpointTriplet.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/PositionSetpointTriplet.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/PowerButtonState.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/PowerButtonState.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/PowerMonitor.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/PowerMonitor.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/PpsCapture.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/PpsCapture.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/PwmInput.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/PwmInput.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Px4ioStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Px4ioStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/QshellReq.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/QshellReq.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/QshellRetval.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/QshellRetval.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/RadioStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/RadioStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/RateCtrlStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/RateCtrlStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/RcChannels.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/RcChannels.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/RcParameterMap.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/RcParameterMap.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/RegisterExtComponentReply.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/RegisterExtComponentReply.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/RegisterExtComponentRequest.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/RegisterExtComponentRequest.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Rpm.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Rpm.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/RtlStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/RtlStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/RtlTimeEstimate.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/RtlTimeEstimate.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SatelliteInfo.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SatelliteInfo.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorAccel.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorAccel.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorAccelFifo.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorAccelFifo.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorAirflow.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorAirflow.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorBaro.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorBaro.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorCombined.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorCombined.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorCorrection.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorCorrection.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorGnssRelative.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorGnssRelative.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorGps.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorGps.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorGyro.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorGyro.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorGyroFft.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorGyroFft.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorGyroFifo.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorGyroFifo.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorHygrometer.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorHygrometer.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorMag.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorMag.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorOpticalFlow.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorOpticalFlow.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorPreflightMag.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorPreflightMag.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorSelection.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorSelection.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorUwb.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorUwb.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorsStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorsStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorsStatusImu.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SensorsStatusImu.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SystemPower.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/SystemPower.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TakeoffStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TakeoffStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TaskStackInfo.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TaskStackInfo.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TecsStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TecsStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TelemetryStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TelemetryStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TiltrotorExtraControls.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TiltrotorExtraControls.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TimesyncStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TimesyncStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TrajectoryBezier.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TrajectoryBezier.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TrajectorySetpoint.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TrajectorySetpoint.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TrajectoryWaypoint.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TrajectoryWaypoint.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TransponderReport.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TransponderReport.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TuneControl.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/TuneControl.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/UavcanParameterRequest.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/UavcanParameterRequest.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/UavcanParameterValue.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/UavcanParameterValue.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/UlogStream.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/UlogStream.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/UlogStreamAck.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/UlogStreamAck.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/UnregisterExtComponent.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/UnregisterExtComponent.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleAcceleration.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleAcceleration.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleAirData.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleAirData.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleAngularAccelerationSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleAngularAccelerationSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleAngularVelocity.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleAngularVelocity.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleAttitude.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleAttitude.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleAttitudeSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleAttitudeSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleCommand.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleCommand.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleCommandAck.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleCommandAck.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleConstraints.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleConstraints.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleControlMode.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleControlMode.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleGlobalPosition.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleGlobalPosition.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleImu.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleImu.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleImuStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleImuStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleLandDetected.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleLandDetected.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleLocalPosition.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleLocalPosition.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleLocalPositionSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleLocalPositionSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleMagnetometer.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleMagnetometer.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleOdometry.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleOdometry.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleOpticalFlow.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleOpticalFlow.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleOpticalFlowVel.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleOpticalFlowVel.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleRatesSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleRatesSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleRoi.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleRoi.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleThrustSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleThrustSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleTorqueSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleTorqueSetpoint.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleTrajectoryBezier.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleTrajectoryBezier.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleTrajectoryWaypoint.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VehicleTrajectoryWaypoint.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VelocityLimits.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VelocityLimits.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VtolVehicleStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/VtolVehicleStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/WheelEncoders.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/WheelEncoders.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Wind.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/Wind.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/YawEstimatorStatus.idl" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/msg/YawEstimatorStatus.idl" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/srv/VehicleCommand.idl" "DESTINATION" "share/px4_msgs/srv")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_adapter/px4_msgs/srv/VehicleCommand.idl" "DESTINATION" "share/px4_msgs/srv")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ActionRequest.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ActionRequest.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ActuatorArmed.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ActuatorArmed.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ActuatorControlsStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ActuatorControlsStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ActuatorMotors.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ActuatorMotors.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ActuatorOutputs.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ActuatorOutputs.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ActuatorServos.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ActuatorServos.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ActuatorServosTrim.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ActuatorServosTrim.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ActuatorTest.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ActuatorTest.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/AdcReport.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/AdcReport.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Airspeed.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Airspeed.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/AirspeedValidated.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/AirspeedValidated.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/AirspeedWind.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/AirspeedWind.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ArmingCheckReply.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ArmingCheckReply.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ArmingCheckRequest.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ArmingCheckRequest.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/AutotuneAttitudeControlStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/AutotuneAttitudeControlStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/BatteryStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/BatteryStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Buffer128.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Buffer128.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ButtonEvent.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ButtonEvent.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/CameraCapture.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/CameraCapture.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/CameraStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/CameraStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/CameraTrigger.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/CameraTrigger.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/CanInterfaceStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/CanInterfaceStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/CellularStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/CellularStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/CollisionConstraints.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/CollisionConstraints.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/CollisionReport.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/CollisionReport.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ConfigOverrides.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ConfigOverrides.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ControlAllocatorStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ControlAllocatorStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Cpuload.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Cpuload.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DatamanRequest.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DatamanRequest.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DatamanResponse.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DatamanResponse.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DebugArray.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DebugArray.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DebugKeyValue.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DebugKeyValue.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DebugValue.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DebugValue.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DebugVect.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DebugVect.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DifferentialDriveSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DifferentialDriveSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DifferentialPressure.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DifferentialPressure.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DistanceSensor.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/DistanceSensor.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Ekf2Timestamps.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Ekf2Timestamps.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EscReport.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EscReport.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EscStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EscStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorAidSource1d.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorAidSource1d.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorAidSource2d.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorAidSource2d.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorAidSource3d.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorAidSource3d.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorBias.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorBias.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorBias3d.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorBias3d.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorEventFlags.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorEventFlags.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorGpsStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorGpsStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorInnovations.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorInnovations.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorSelectorStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorSelectorStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorSensorBias.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorSensorBias.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorStates.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorStates.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorStatusFlags.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/EstimatorStatusFlags.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Event.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Event.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/FailsafeFlags.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/FailsafeFlags.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/FailureDetectorStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/FailureDetectorStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/FigureEightStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/FigureEightStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/FlightPhaseEstimation.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/FlightPhaseEstimation.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/FollowTarget.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/FollowTarget.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/FollowTargetEstimator.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/FollowTargetEstimator.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/FollowTargetStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/FollowTargetStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GeneratorStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GeneratorStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GeofenceResult.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GeofenceResult.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GeofenceStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GeofenceStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GimbalControls.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GimbalControls.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GimbalDeviceAttitudeStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GimbalDeviceAttitudeStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GimbalDeviceInformation.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GimbalDeviceInformation.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GimbalDeviceSetAttitude.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GimbalDeviceSetAttitude.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GimbalManagerInformation.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GimbalManagerInformation.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GimbalManagerSetAttitude.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GimbalManagerSetAttitude.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GimbalManagerSetManualControl.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GimbalManagerSetManualControl.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GimbalManagerStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GimbalManagerStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GotoSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GotoSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GpioConfig.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GpioConfig.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GpioIn.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GpioIn.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GpioOut.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GpioOut.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GpioRequest.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GpioRequest.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GpsDump.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GpsDump.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GpsInjectData.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/GpsInjectData.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Gripper.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Gripper.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/HealthReport.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/HealthReport.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/HeaterStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/HeaterStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/HomePosition.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/HomePosition.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/HoverThrustEstimate.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/HoverThrustEstimate.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/InputRc.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/InputRc.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/InternalCombustionEngineStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/InternalCombustionEngineStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/IridiumsbdStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/IridiumsbdStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/IrlockReport.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/IrlockReport.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/LandingGear.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/LandingGear.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/LandingGearWheel.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/LandingGearWheel.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/LandingTargetInnovations.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/LandingTargetInnovations.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/LandingTargetPose.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/LandingTargetPose.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/LaunchDetectionStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/LaunchDetectionStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/LedControl.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/LedControl.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/LogMessage.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/LogMessage.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/LoggerStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/LoggerStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/MagWorkerData.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/MagWorkerData.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/MagnetometerBiasEstimate.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/MagnetometerBiasEstimate.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ManualControlSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ManualControlSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ManualControlSwitches.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ManualControlSwitches.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/MavlinkLog.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/MavlinkLog.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/MavlinkTunnel.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/MavlinkTunnel.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/MessageFormatRequest.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/MessageFormatRequest.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/MessageFormatResponse.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/MessageFormatResponse.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Mission.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Mission.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/MissionResult.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/MissionResult.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ModeCompleted.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ModeCompleted.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/MountOrientation.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/MountOrientation.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/NavigatorMissionItem.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/NavigatorMissionItem.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/NormalizedUnsignedSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/NormalizedUnsignedSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/NpfgStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/NpfgStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ObstacleDistance.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ObstacleDistance.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/OffboardControlMode.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/OffboardControlMode.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/OnboardComputerStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/OnboardComputerStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/OrbTest.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/OrbTest.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/OrbTestLarge.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/OrbTestLarge.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/OrbTestMedium.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/OrbTestMedium.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/OrbitStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/OrbitStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ParameterResetRequest.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ParameterResetRequest.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ParameterSetUsedRequest.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ParameterSetUsedRequest.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ParameterSetValueRequest.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ParameterSetValueRequest.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ParameterSetValueResponse.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ParameterSetValueResponse.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ParameterUpdate.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/ParameterUpdate.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Ping.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Ping.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/PositionControllerLandingStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/PositionControllerLandingStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/PositionControllerStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/PositionControllerStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/PositionSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/PositionSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/PositionSetpointTriplet.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/PositionSetpointTriplet.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/PowerButtonState.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/PowerButtonState.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/PowerMonitor.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/PowerMonitor.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/PpsCapture.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/PpsCapture.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/PwmInput.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/PwmInput.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Px4ioStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Px4ioStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/QshellReq.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/QshellReq.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/QshellRetval.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/QshellRetval.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/RadioStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/RadioStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/RateCtrlStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/RateCtrlStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/RcChannels.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/RcChannels.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/RcParameterMap.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/RcParameterMap.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/RegisterExtComponentReply.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/RegisterExtComponentReply.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/RegisterExtComponentRequest.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/RegisterExtComponentRequest.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Rpm.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Rpm.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/RtlStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/RtlStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/RtlTimeEstimate.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/RtlTimeEstimate.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SatelliteInfo.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SatelliteInfo.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorAccel.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorAccel.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorAccelFifo.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorAccelFifo.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorAirflow.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorAirflow.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorBaro.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorBaro.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorCombined.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorCombined.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorCorrection.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorCorrection.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorGnssRelative.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorGnssRelative.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorGps.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorGps.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorGyro.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorGyro.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorGyroFft.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorGyroFft.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorGyroFifo.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorGyroFifo.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorHygrometer.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorHygrometer.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorMag.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorMag.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorOpticalFlow.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorOpticalFlow.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorPreflightMag.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorPreflightMag.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorSelection.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorSelection.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorUwb.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorUwb.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorsStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorsStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorsStatusImu.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SensorsStatusImu.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SystemPower.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/SystemPower.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TakeoffStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TakeoffStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TaskStackInfo.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TaskStackInfo.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TecsStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TecsStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TelemetryStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TelemetryStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TiltrotorExtraControls.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TiltrotorExtraControls.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TimesyncStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TimesyncStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TrajectoryBezier.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TrajectoryBezier.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TrajectorySetpoint.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TrajectorySetpoint.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TrajectoryWaypoint.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TrajectoryWaypoint.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TransponderReport.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TransponderReport.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TuneControl.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/TuneControl.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/UavcanParameterRequest.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/UavcanParameterRequest.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/UavcanParameterValue.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/UavcanParameterValue.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/UlogStream.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/UlogStream.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/UlogStreamAck.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/UlogStreamAck.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/UnregisterExtComponent.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/UnregisterExtComponent.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleAcceleration.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleAcceleration.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleAirData.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleAirData.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleAngularAccelerationSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleAngularAccelerationSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleAngularVelocity.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleAngularVelocity.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleAttitude.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleAttitude.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleAttitudeSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleAttitudeSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleCommand.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleCommand.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleCommandAck.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleCommandAck.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleConstraints.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleConstraints.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleControlMode.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleControlMode.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleGlobalPosition.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleGlobalPosition.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleImu.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleImu.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleImuStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleImuStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleLandDetected.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleLandDetected.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleLocalPosition.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleLocalPosition.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleLocalPositionSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleLocalPositionSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleMagnetometer.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleMagnetometer.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleOdometry.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleOdometry.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleOpticalFlow.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleOpticalFlow.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleOpticalFlowVel.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleOpticalFlowVel.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleRatesSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleRatesSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleRoi.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleRoi.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleThrustSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleThrustSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleTorqueSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleTorqueSetpoint.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleTrajectoryBezier.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleTrajectoryBezier.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleTrajectoryWaypoint.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VehicleTrajectoryWaypoint.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VelocityLimits.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VelocityLimits.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VtolVehicleStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/VtolVehicleStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/WheelEncoders.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/WheelEncoders.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Wind.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/Wind.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/YawEstimatorStatus.msg" "DESTINATION" "share/px4_msgs/msg")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/msg/YawEstimatorStatus.msg" "DESTINATION" "share/px4_msgs/msg")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/srv/VehicleCommand.srv" "DESTINATION" "share/px4_msgs/srv")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/srv/VehicleCommand.srv" "DESTINATION" "share/px4_msgs/srv")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_cmake/srv/VehicleCommand_Request.msg" "DESTINATION" "share/px4_msgs/srv")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_cmake/srv/VehicleCommand_Request.msg" "DESTINATION" "share/px4_msgs/srv")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_cmake/srv/VehicleCommand_Response.msg" "DESTINATION" "share/px4_msgs/srv")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_cmake/srv/VehicleCommand_Response.msg" "DESTINATION" "share/px4_msgs/srv")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/px4_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/px4_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/px4_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/px4_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")

# install(FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/px4_msgs/environment")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/px4_msgs/environment")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/px4_msgs/environment")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/px4_msgs/environment")

# install(FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/px4_msgs/environment")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/px4_msgs/environment")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/px4_msgs/environment")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/px4_msgs/environment")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/px4_msgs")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/px4_msgs")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/px4_msgs")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/px4_msgs")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/px4_msgs")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/px4_msgs")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/px4_msgs")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/px4_msgs")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/px4_msgs")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/px4_msgs")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_index/share/ament_index/resource_index/packages/px4_msgs" "DESTINATION" "share/ament_index/resource_index/packages")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_index/share/ament_index/resource_index/packages/px4_msgs" "DESTINATION" "share/ament_index/resource_index/packages")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/px4_msgs/cmake")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/px4_msgs/cmake")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/px4_msgs/cmake")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/px4_msgs/cmake")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/px4_msgs/cmake")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/px4_msgs/cmake")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/px4_msgs/cmake")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/px4_msgs/cmake")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/px4_msgs/cmake")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/px4_msgs/cmake")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/px4_msgs/cmake")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/px4_msgs/cmake")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/px4_msgs/cmake")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/px4_msgs/cmake")

# install(FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_core/px4_msgsConfig.cmake" "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_core/px4_msgsConfig-version.cmake" "DESTINATION" "share/px4_msgs/cmake")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_core/px4_msgsConfig.cmake" "/home/fourdds/ros2_ws/build/px4_msgs/ament_cmake_core/px4_msgsConfig-version.cmake" "DESTINATION" "share/px4_msgs/cmake")

# install(FILES "/home/fourdds/ros2_ws/src/px4_msgs/package.xml" "DESTINATION" "share/px4_msgs")
ament_cmake_symlink_install_files("/home/fourdds/ros2_ws/src/px4_msgs" FILES "/home/fourdds/ros2_ws/src/px4_msgs/package.xml" "DESTINATION" "share/px4_msgs")
