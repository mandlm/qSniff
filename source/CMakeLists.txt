cmake_minimum_required(VERSION 3.6)

set(CMAKE_CXX_STANDARD 11)

add_definitions(-DRPI)

add_subdirectory(RCSwitch)
add_subdirectory(sniffer)
add_subdirectory(qsniff)
add_subdirectory(sniff)

