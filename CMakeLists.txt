cmake_minimum_required(VERSION 3.8)
project(imc_ros_bridge)

set(CMAKE_CXX_STANDARD 14)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(imc_ros_bridge REQUIRED) 
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)

# Custom messages and services
find_package(rosidl_default_generators REQUIRED)
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/PlanControl.msg"
  "msg/PlanControlState.msg"
  "msg/VehicleState.msg"
  "msg/EstimatedState.msg"
  "msg/RemoteState.msg"
  "msg/SonarData.msg"
  "msg/DesiredHeading.msg"
  "msg/DesiredHeadingRate.msg"
  "msg/DesiredPitch.msg"
  "msg/DesiredRoll.msg"
  "msg/DesiredSpeed.msg"
  "msg/DesiredZ.msg"
  "msg/PlanDB.msg"
  "msg/PlanSpecification.msg"
  "msg/PlanDBInformation.msg"
  "msg/PlanDBState.msg"
  "msg/PlanManeuver.msg"
  "msg/Maneuver.msg"
  "msg/PolygonVertex.msg"
  DEPENDENCIES std_msgs sensor_msgs geometry_msgs
 )


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

include_directories(
  include
  include/imc_ros_bridge/imc_to_ros
  include/imc_ros_bridge/ros_to_imc
  include/imc_tcp_link
  include/imc_udp_link
  external/imc-cxx 
  external/md5
  ${ament_INCLUDE_DIRS}
)

add_library( md5 external/md5/md5.cpp )

add_library( ros_to_imc_heartbeat src/ros_to_imc/Heartbeat.cpp )
target_link_libraries( ros_to_imc_heartbeat ${rclcpp_LIBRARIES} )
target_include_directories(ros_to_imc_heartbeat PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(ros_to_imc_heartbeat rclcpp)

add_library( imc_to_ros_heartbeat src/imc_to_ros/Heartbeat.cpp )
target_link_libraries( imc_to_ros_heartbeat ${rclcpp_LIBRARIES} )
target_include_directories(imc_to_ros_heartbeat PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(imc_to_ros_heartbeat rclcpp)

add_library( ros_to_imc_gpsfix src/ros_to_imc/GpsFix.cpp )
target_link_libraries( ros_to_imc_gpsfix  ${rclcpp_LIBRARIES} )
target_include_directories(ros_to_imc_gpsfix  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(ros_to_imc_gpsfix  rclcpp std_msgs sensor_msgs)

add_library( ros_to_imc_goto src/ros_to_imc/Goto.cpp )
target_link_libraries( ros_to_imc_goto  ${rclcpp_LIBRARIES} )
target_include_directories(ros_to_imc_goto  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(ros_to_imc_goto  rclcpp std_msgs sensor_msgs geometry_msgs)

add_library( imc_to_ros_goto src/imc_to_ros/Goto.cpp )
target_link_libraries( imc_to_ros_goto  ${rclcpp_LIBRARIES} )
target_include_directories(imc_to_ros_goto  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(imc_to_ros_goto  rclcpp std_msgs sensor_msgs geometry_msgs)

add_library( imc_factory external/imc-cxx/IMC/Base/Factory.cpp )
target_link_libraries( imc_factory  ${rclcpp_LIBRARIES} )
target_include_directories(imc_factory  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(imc_factory  rclcpp std_msgs sensor_msgs geometry_msgs)

add_library( udp_link src/udp_link.cpp )
target_link_libraries( udp_link  ${rclcpp_LIBRARIES} )
target_include_directories(udp_link PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(udp_link  rclcpp std_msgs sensor_msgs geometry_msgs)

add_library( imc_handle src/imc_handle.cpp )
target_link_libraries( imc_handle  ${rclcpp_LIBRARIES} )
target_include_directories(imc_handle PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(imc_handle rclcpp std_msgs sensor_msgs geometry_msgs)

add_library( imc_to_ros_abort src/imc_to_ros/Abort.cpp )
target_link_libraries( imc_to_ros_abort  ${rclcpp_LIBRARIES} )
target_include_directories(imc_to_ros_abort PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(imc_to_ros_abort rclcpp std_msgs sensor_msgs geometry_msgs)

add_library( imc_to_ros_plandb src/imc_to_ros/PlanDB.cpp )
target_link_libraries( imc_to_ros_plandb  ${rclcpp_LIBRARIES} )
target_include_directories(imc_to_ros_plandb  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(imc_to_ros_plandb rclcpp std_msgs sensor_msgs geometry_msgs imc_ros_bridge)

add_library( ros_to_imc_plandb src/ros_to_imc/PlanDB.cpp )
target_link_libraries( ros_to_imc_plandb  ${rclcpp_LIBRARIES} )
target_include_directories(ros_to_imc_plandb  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(ros_to_imc_plandb rclcpp std_msgs sensor_msgs geometry_msgs imc_ros_bridge)

add_library( ros_to_imc_gpsnavdata src/ros_to_imc/GpsNavData.cpp)
target_link_libraries( ros_to_imc_gpsnavdata  ${rclcpp_LIBRARIES} )
target_include_directories(ros_to_imc_gpsnavdata  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(ros_to_imc_gpsnavdata rclcpp std_msgs sensor_msgs geometry_msgs imc_ros_bridge)

add_library(  imc_to_ros_plancontrol  src/imc_to_ros/PlanControl.cpp)
target_link_libraries( imc_to_ros_plancontrol  ${rclcpp_LIBRARIES} )
target_include_directories( imc_to_ros_plancontrol   PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies( imc_to_ros_plancontrol  rclcpp std_msgs sensor_msgs geometry_msgs imc_ros_bridge)

add_library( ros_to_imc_plancontrolstate src/ros_to_imc/PlanControlState.cpp)
target_link_libraries(ros_to_imc_plancontrolstate ${rclcpp_LIBRARIES} )
target_include_directories( ros_to_imc_plancontrolstate  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies( ros_to_imc_plancontrolstate  rclcpp std_msgs sensor_msgs geometry_msgs imc_ros_bridge)

add_library( ros_to_imc_estimatedstate src/ros_to_imc/EstimatedState.cpp)
target_link_libraries(ros_to_imc_estimatedstate ${rclcpp_LIBRARIES} )
target_include_directories( ros_to_imc_estimatedstate  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies( ros_to_imc_estimatedstate  
rclcpp std_msgs sensor_msgs geometry_msgs imc_ros_bridge tf2 tf2_ros tf2_geometry_msgs)

add_library( ros_to_imc_vehiclestate src/ros_to_imc/VehicleState.cpp)
target_link_libraries(ros_to_imc_vehiclestate ${rclcpp_LIBRARIES} )
target_include_directories( ros_to_imc_vehiclestate PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies( ros_to_imc_vehiclestate rclcpp imc_ros_bridge )

add_library(  ros_to_imc_remotestate src/ros_to_imc/RemoteState.cpp)
target_link_libraries( ros_to_imc_remotestate ${rclcpp_LIBRARIES} )
target_include_directories(  ros_to_imc_remotestate PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(  ros_to_imc_remotestate  rclcpp imc_ros_bridge)

add_library( ros_to_imc_sonardata src/ros_to_imc/SonarData.cpp)
target_link_libraries( ros_to_imc_sonardata ${rclcpp_LIBRARIES} )
target_include_directories(  ros_to_imc_sonardata PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(  ros_to_imc_sonardata rclcpp imc_ros_bridge)

add_library( ros_to_imc_DesiredHeading  src/ros_to_imc/DesiredHeading.cpp)
target_link_libraries( ros_to_imc_DesiredHeading  ${rclcpp_LIBRARIES} )
target_include_directories(  ros_to_imc_DesiredHeading  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(  ros_to_imc_DesiredHeading   rclcpp  imc_ros_bridge)

add_library( ros_to_imc_DesiredHeadingRate  src/ros_to_imc/DesiredHeadingRate.cpp)
target_link_libraries( ros_to_imc_DesiredHeadingRate ${rclcpp_LIBRARIES} )
target_include_directories(  ros_to_imc_DesiredHeadingRate  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(  ros_to_imc_DesiredHeadingRate rclcpp imc_ros_bridge)

add_library( ros_to_imc_DesiredPitch  src/ros_to_imc/DesiredPitch.cpp)
target_link_libraries( ros_to_imc_DesiredPitch ${rclcpp_LIBRARIES} )
target_include_directories( ros_to_imc_DesiredPitch  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(  ros_to_imc_DesiredPitch rclcpp imc_ros_bridge)

add_library( ros_to_imc_DesiredRoll   src/ros_to_imc/DesiredRoll.cpp)
target_link_libraries( ros_to_imc_DesiredRoll  ${rclcpp_LIBRARIES} )
target_include_directories( ros_to_imc_DesiredRoll   PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(  ros_to_imc_DesiredRoll rclcpp  imc_ros_bridge)

add_library( ros_to_imc_DesiredSpeed  src/ros_to_imc/DesiredSpeed.cpp)
target_link_libraries( ros_to_imc_DesiredSpeed ${rclcpp_LIBRARIES} )
target_include_directories( ros_to_imc_DesiredSpeed  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(  ros_to_imc_DesiredSpeed
rclcpp std_msgs sensor_msgs geometry_msgs imc_ros_bridge)

add_library( ros_to_imc_DesiredZ src/ros_to_imc/DesiredZ.cpp)
target_link_libraries( ros_to_imc_DesiredZ ${rclcpp_LIBRARIES} )
target_include_directories( ros_to_imc_DesiredZ  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${rclcpp_INCLUDE_DIRS})
ament_target_dependencies(ros_to_imc_DesiredZ
rclcpp imc_ros_bridge)

ament_export_dependencies(rclcpp)

# install(TARGETS
# ros_to_imc_gpsfix
#   DESTINATION lib/${PROJECT_NAME})

ament_package()
