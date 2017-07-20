cmake_minimum_required (VERSION 3.0)
project (Org2Configs)

#### Setup which compiler to use ####
# Enable C++ 14
set(CMAKE_CXX_STANDARD 14)
# Don't fall back silently, if compiler doesn't support C++ 14
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Disable compiler specific C++ extensions (such as --std=gnu++14 or Windows specifics)
set(CMAKE_CXX_EXTENSIONS OFF)

# Include source
include_directories(.)
file(GLOB SOURCES "*.cpp")

# Generate build-files
add_executable(org2conf ${SOURCES})

