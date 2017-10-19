project(qSniff)
cmake_minimum_required(VERSION 3.6)

find_package(Qt5Widgets)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

add_executable(${PROJECT_NAME}
    qsniff.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
	sniffthread.cpp
	sniffthread.h
)

target_link_libraries(${PROJECT_NAME} 
	sniffer 
	Qt5::Widgets
)

