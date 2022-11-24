cmake_minimum_required(VERSION 3.23)
project(Labb2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Labb2 main.cpp Shape.cpp Shape.h Circle.cpp Circle.h Cylinder.cpp Cylinder.h Rectangle.cpp Rectangle.h Rounded_Rectangle.cpp Rounded_Rectangle.h Parallel_Piped.cpp Parallel_Piped.h)
