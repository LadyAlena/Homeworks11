cmake_minimum_required(VERSION 3.22.0)
project(LeaveProject)
if(WIN32)
	set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()
add_library(LeaveLib SHARED Leave.h Leave.cpp)
add_executable(LeaveEXE LeaveClient.cpp)
target_link_libraries(LeaveEXE LeaveLib)