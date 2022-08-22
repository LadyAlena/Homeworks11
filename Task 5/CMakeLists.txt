cmake_minimum_required(VERSION 3.22.0)

project(Figure)

if(WIN32)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()

add_library(FigureLib SHARED
source/Figure.cpp
source/Figure.h
source/GetInfoAboutFigure.cpp
source/GetInfoAboutFigure.h
source/Triangle.h
source/Triangle.cpp
source/RightTriangle.h
source/RightTriangle.cpp
source/IsoscelesTriangle.h
source/IsoscelesTriangle.cpp
source/EquilateraltTriangle.h
source/EquilateraltTriangle.cpp
source/Quadrilateral.h
source/Quadrilateral.cpp
source/Parallelogram.h
source/Parallelogram.cpp
source/Rectangle.h
source/Rectangle.cpp
source/Rhomb.h
source/Rhomb.cpp
source/Square.h
source/Square.cpp)

add_executable(Figure source/Source.cpp)
target_link_libraries(Figure FigureLib)