cmake_minimum_required(VERSION 3.12.0)
project(TYPEOF LANGUAGES CXX)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake")
set(CMAKE_BUILD_TYPE Release) 
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

###################################################################

add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} 
    INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")
