cmake_minimum_required(VERSION 3.8)
project(exo2_mystack)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp mychainedstack.cpp mychainedstack.h mystack.h)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror")


add_executable(exo2_mystack ${SOURCE_FILES})