project(rc-switch)
cmake_minimum_required(VERSION 3.6)

add_library(${PROJECT_NAME}
	rc-switch/RCSwitch.cpp
	rc-switch/RCSwitch.h
)

target_link_libraries(${PROJECT_NAME}
	wiringPi
)

target_include_directories(${PROJECT_NAME}
	PUBLIC .
)

