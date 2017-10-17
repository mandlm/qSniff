cmake_minimum_required(VERSION 3.7)

add_definitions(-DRPI)

add_library(rc-switch 
	rc-switch/RCSwitch.cpp
	rc-switch/RCSwitch.h
)

add_executable(qSniff
	qsniff.cpp
)

target_link_libraries(qSniff rc-switch wiringPi)

