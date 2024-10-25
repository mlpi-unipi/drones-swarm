# CMake generated Testfile for 
# Source directory: /home/fourdds/ws/src/vision_opencv/image_geometry
# Build directory: /home/fourdds/ws/build/image_geometry
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(image_geometry-utest "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/fourdds/ws/build/image_geometry/test_results/image_geometry/image_geometry-utest.gtest.xml" "--package-name" "image_geometry" "--output-file" "/home/fourdds/ws/build/image_geometry/ament_cmake_gtest/image_geometry-utest.txt" "--command" "/home/fourdds/ws/build/image_geometry/image_geometry-utest" "--gtest_output=xml:/home/fourdds/ws/build/image_geometry/test_results/image_geometry/image_geometry-utest.gtest.xml")
set_tests_properties(image_geometry-utest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/fourdds/ws/build/image_geometry/image_geometry-utest" TIMEOUT "60" WORKING_DIRECTORY "/home/fourdds/ws/build/image_geometry" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/fourdds/ws/src/vision_opencv/image_geometry/CMakeLists.txt;49;ament_add_gtest;/home/fourdds/ws/src/vision_opencv/image_geometry/CMakeLists.txt;0;")
subdirs("gtest")
