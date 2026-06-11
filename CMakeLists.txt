cmake_minimum_required(VERSION 3.8)
project(x5_ros_message)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/BridgeStatus.msg"
  "msg/DetectionResult.msg"
  "msg/DroneInfo.msg"
  "msg/RecognitionStatus.msg"
  "msg/TargetSituation.msg"
  "srv/CameraControl.srv"
  "srv/GimbalControl.srv"
  "srv/Land.srv"
  "srv/LockTarget.srv"
  "srv/Loiter.srv"
  "srv/LostBehaviorConfig.srv"
  "srv/NavigateTo.srv"
  "srv/PayloadSwitch.srv"
  "srv/ReturnToLaunch.srv"
  "srv/StrikeTarget.srv"
  "srv/Takeoff.srv"
  "srv/TrackTarget.srv"
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
