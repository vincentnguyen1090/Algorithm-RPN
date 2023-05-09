cmake_minimum_required(VERSION 3.24)
project(RPN_algo)

set(CMAKE_CXX_STANDARD 17)

add_executable(RPN_algo main.cpp RPN.cpp RPN.h ShuntingYard.cpp ShuntingYard.h)
