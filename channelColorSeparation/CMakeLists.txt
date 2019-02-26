cmake_minimum_required(VERSION 2.8)

project(channelColor)

find_package(OpenCV REQUIRED)

add_executable(channelColor ../src/channelColor.cpp)
target_link_libraries(channelColor ${OpenCV_LIBS})
