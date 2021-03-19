cmake_minimum_required(VERSION 3.17)
project(bh_bare)

set(CMAKE_CXX_STANDARD 17)

add_executable(bh_bare main.cpp simulation.h body.h bhtree.h quad.h)