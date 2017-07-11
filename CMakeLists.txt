cmake_minimum_required (VERSION 2.6)
project (Org2Configs)

include_directories(.)
file(GLOB SOURCES "*.cpp")

add_executable(org2conf ${SOURCES})
#add_executable(org2conf main.cpp)
