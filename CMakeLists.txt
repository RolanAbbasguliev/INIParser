cmake_minimum_required(VERSION 3.15)
project(OOP)

set(CMAKE_CXX_STANDARD 14)

add_executable(OOP main.cpp Parser.cpp Parser.h FileHandler.cpp FileHandler.h GetInfo.cpp GetInfo.h)