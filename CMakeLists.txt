cmake_minimum_required(VERSION 3.0)
project(ApproximateCalculations)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall")
set(INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/source")

set(HEADERS ${INCLUDE_DIR}/functions.hpp)
set(SOURCES ${SOURCE_DIR}/main.cpp ${SOURCE_DIR}/functions.cpp)

add_executable(ApproximateCalculations ${SOURCES} ${HEADERS})
target_include_directories(ApproximateCalculations PRIVATE ${INCLUDE_DIR})