cmake_minimum_required(VERSION 3.12)
cmake_policy(VERSION 3.12)
set(CMAKE_CXX_STANDARD 17 CACHE STRING "C++ standard")

set(NAME "convolution_kernel")
set(PROJECT_VERSION 0.1)
project(${NAME} VERSION ${PROJECT_VERSION})
set(PROJECT_NAME ${PROJECT_NAME}_v${PROJECT_VERSION})

option(BUILD_UNIT_TESTS "Build Unit Tests" ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_CURRENT_SOURCE_DIR}/bin)

add_executable(${PROJECT_NAME} main.cpp)

target_compile_options(${PROJECT_NAME} PUBLIC -Wall -Wextra -Werror -Wpedantic -Wfatal-errors)

# add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/src/)

if(BUILD_UNIT_TESTS)
    add_subdirectory(tests/)
    enable_testing()
endif(BUILD_UNIT_TESTS)
