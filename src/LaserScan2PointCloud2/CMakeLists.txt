cmake_minimum_required(VERSION 3.0.2)
project(LaserScan2PointCloud2)

find_package(catkin REQUIRED COMPONENTS
  laser_geometry
  roscpp
  rospy
  sensor_msgs
  tf
)

catkin_package(
   CATKIN_DEPENDS laser_geometry roscpp rospy sensor_msgs tf
)

include_directories(
   ${catkin_INCLUDE_DIRS}

)

add_executable(LaserScan2PointCloud2 src/LaserScan2PointCloud2.cpp)

target_link_libraries(LaserScan2PointCloud2
  ${catkin_LIBRARIES}
)

