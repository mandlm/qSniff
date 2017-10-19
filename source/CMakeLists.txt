cmake_minimum_required(VERSION 3.6)

find_package(Qt5Widgets)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

add_definitions(-DRPI)

add_executable(qSniff
    qsniff.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
	sniffthread.cpp
	sniffthread.h
)

target_link_libraries(qSniff 
	sniffer 
	rc-switch 
	wiringPi 
	Qt5::Widgets
)

add_executable(Sniff
	sniff.cpp
)

target_link_libraries(Sniff 
	sniffer 
	rc-switch 
	wiringPi
)

add_subdirectory(RCSwitch)
add_subdirectory(sniffer)

