cmake_minimum_required(VERSION 3.7)

find_package(Qt5Widgets)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

add_definitions(-DRPI)

add_library(rc-switch 
	rc-switch/RCSwitch.cpp
	rc-switch/RCSwitch.h
)

add_executable(qSniff
    qsniff.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
	sniffthread.cpp
	sniffthread.h
)

target_link_libraries(qSniff rc-switch wiringPi Qt5::Widgets)

