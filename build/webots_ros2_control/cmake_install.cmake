# Install script for directory: /home/albin/webots_ws/src/webots_ros2/webots_ros2_control

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/albin/webots_ws/install/webots_ros2_control")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control" TYPE FILE FILES "/home/albin/webots_ws/src/webots_ros2/webots_ros2_control/webots_ros2_control.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control" TYPE FILE FILES "/home/albin/webots_ws/src/webots_ros2/webots_ros2_control/webots_ros2_control_system.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwebots_ros2_control.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwebots_ros2_control.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwebots_ros2_control.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/albin/webots_ws/build/webots_ros2_control/libwebots_ros2_control.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwebots_ros2_control.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwebots_ros2_control.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwebots_ros2_control.so"
         OLD_RPATH "/home/albin/ros2_iron/install/diagnostic_msgs/lib:/home/albin/ros2_iron/install/class_loader/lib:/home/albin/ros2_iron/install/sensor_msgs/lib:/home/albin/ros2_iron/install/trajectory_msgs/lib:/home/albin/ros2_iron/install/geometry_msgs/lib:/home/albin/ros2_iron/install/rclcpp_lifecycle/lib:/home/albin/ros2_iron/install/rcl_lifecycle/lib:/home/albin/ros2_iron/install/lifecycle_msgs/lib:/home/albin/ros2_iron/install/rclcpp_action/lib:/home/albin/ros2_iron/install/rclcpp/lib:/home/albin/ros2_iron/install/libstatistics_collector/lib:/home/albin/ros2_iron/install/rosgraph_msgs/lib:/home/albin/ros2_iron/install/statistics_msgs/lib:/home/albin/ros2_iron/install/rcl_action/lib:/home/albin/ros2_iron/install/rcl/lib:/home/albin/ros2_iron/install/rcl_interfaces/lib:/home/albin/ros2_iron/install/rcl_yaml_param_parser/lib:/home/albin/ros2_iron/install/tracetools/lib:/home/albin/ros2_iron/install/rcl_logging_interface/lib:/home/albin/ros2_iron/install/rmw_implementation/lib:/home/albin/ros2_iron/install/ament_index_cpp/lib:/home/albin/ros2_iron/install/type_description_interfaces/lib:/home/albin/ros2_iron/install/action_msgs/lib:/home/albin/ros2_iron/install/unique_identifier_msgs/lib:/home/albin/ros2_iron/install/service_msgs/lib:/home/albin/ros2_iron/install/std_msgs/lib:/home/albin/ros2_iron/install/builtin_interfaces/lib:/home/albin/ros2_iron/install/rosidl_typesupport_fastrtps_c/lib:/home/albin/ros2_iron/install/rosidl_typesupport_fastrtps_cpp/lib:/home/albin/ros2_iron/install/fastcdr/lib:/home/albin/ros2_iron/install/rmw/lib:/home/albin/ros2_iron/install/rosidl_dynamic_typesupport/lib:/home/albin/ros2_iron/install/rosidl_typesupport_introspection_cpp/lib:/home/albin/ros2_iron/install/rosidl_typesupport_introspection_c/lib:/home/albin/ros2_iron/install/rosidl_typesupport_cpp/lib:/home/albin/ros2_iron/install/rosidl_typesupport_c/lib:/home/albin/ros2_iron/install/rcpputils/lib:/home/albin/ros2_iron/install/rosidl_runtime_c/lib:/home/albin/ros2_iron/install/rcutils/lib:/opt/ros/iron/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwebots_ros2_control.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwebots_ros2_control_system.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwebots_ros2_control_system.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwebots_ros2_control_system.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/albin/webots_ws/build/webots_ros2_control/libwebots_ros2_control_system.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwebots_ros2_control_system.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwebots_ros2_control_system.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwebots_ros2_control_system.so"
         OLD_RPATH "/home/albin/ros2_iron/install/rclcpp_lifecycle/lib:/home/albin/ros2_iron/install/class_loader/lib:/home/albin/ros2_iron/install/rclcpp/lib:/home/albin/ros2_iron/install/libstatistics_collector/lib:/home/albin/ros2_iron/install/rosgraph_msgs/lib:/home/albin/ros2_iron/install/statistics_msgs/lib:/home/albin/ros2_iron/install/rcl_lifecycle/lib:/home/albin/ros2_iron/install/rcl/lib:/home/albin/ros2_iron/install/rcl_interfaces/lib:/home/albin/ros2_iron/install/rcl_yaml_param_parser/lib:/home/albin/ros2_iron/install/rcl_logging_interface/lib:/home/albin/ros2_iron/install/rmw_implementation/lib:/home/albin/ros2_iron/install/ament_index_cpp/lib:/home/albin/ros2_iron/install/type_description_interfaces/lib:/home/albin/ros2_iron/install/tracetools/lib:/home/albin/ros2_iron/install/action_msgs/lib:/home/albin/ros2_iron/install/unique_identifier_msgs/lib:/home/albin/ros2_iron/install/sensor_msgs/lib:/home/albin/ros2_iron/install/trajectory_msgs/lib:/home/albin/ros2_iron/install/geometry_msgs/lib:/home/albin/ros2_iron/install/std_msgs/lib:/home/albin/ros2_iron/install/lifecycle_msgs/lib:/home/albin/ros2_iron/install/service_msgs/lib:/home/albin/ros2_iron/install/builtin_interfaces/lib:/home/albin/ros2_iron/install/rosidl_typesupport_fastrtps_c/lib:/home/albin/ros2_iron/install/rosidl_typesupport_fastrtps_cpp/lib:/home/albin/ros2_iron/install/fastcdr/lib:/home/albin/ros2_iron/install/rmw/lib:/home/albin/ros2_iron/install/rosidl_dynamic_typesupport/lib:/home/albin/ros2_iron/install/rosidl_typesupport_introspection_cpp/lib:/home/albin/ros2_iron/install/rosidl_typesupport_introspection_c/lib:/home/albin/ros2_iron/install/rosidl_typesupport_cpp/lib:/home/albin/ros2_iron/install/rosidl_typesupport_c/lib:/home/albin/ros2_iron/install/rosidl_runtime_c/lib:/home/albin/ros2_iron/install/rcpputils/lib:/home/albin/ros2_iron/install/rcutils/lib:/opt/ros/iron/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwebots_ros2_control_system.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/albin/webots_ws/src/webots_ros2/webots_ros2_control/include/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control/environment" TYPE FILE FILES "/opt/ros/iron/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control/environment" TYPE FILE FILES "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_environment_hooks/library_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/webots_ros2_control")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/webots_ros2_control")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control/environment" TYPE FILE FILES "/home/albin/ros2_iron/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control/environment" TYPE FILE FILES "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control/environment" TYPE FILE FILES "/home/albin/ros2_iron/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control/environment" TYPE FILE FILES "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control" TYPE FILE FILES "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control" TYPE FILE FILES "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control" TYPE FILE FILES "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control" TYPE FILE FILES "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control" TYPE FILE FILES "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_index/share/ament_index/resource_index/packages/webots_ros2_control")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/webots_ros2_driver__pluginlib__plugin" TYPE FILE FILES "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_index/share/ament_index/resource_index/webots_ros2_driver__pluginlib__plugin/webots_ros2_control")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/webots_ros2_control__pluginlib__plugin" TYPE FILE FILES "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_index/share/ament_index/resource_index/webots_ros2_control__pluginlib__plugin/webots_ros2_control")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control/cmake" TYPE FILE FILES "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control/cmake" TYPE FILE FILES "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control/cmake" TYPE FILE FILES "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control/cmake" TYPE FILE FILES
    "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_core/webots_ros2_controlConfig.cmake"
    "/home/albin/webots_ws/build/webots_ros2_control/ament_cmake_core/webots_ros2_controlConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros2_control" TYPE FILE FILES "/home/albin/webots_ws/src/webots_ros2/webots_ros2_control/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/albin/webots_ws/build/webots_ros2_control/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
