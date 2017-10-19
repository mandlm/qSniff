project(sniffer)
cmake_minimum_required(VERSION 3.6)

add_library(${PROJECT_NAME}
	sniffer.cpp
	sniffer.h
)

target_link_libraries(${PROJECT_NAME}
	rc-switch
)

target_include_directories(${PROJECT_NAME}
	PUBLIC .
)

