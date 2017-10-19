cmake_minimum_required(VERSION 3.6)

add_library(rc-switch 
	rc-switch/RCSwitch.cpp
	rc-switch/RCSwitch.h
)

target_include_directories(rc-switch
	PUBLIC .
)

