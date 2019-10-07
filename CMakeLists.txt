cmake_minimum_required(VERSION 3.15)

project(penguin)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})

enable_testing()
add_subdirectory(googletest)

set(HEADERS
  include/Penguin.hpp
)

set(SOURCES 
  src/Penguin.cpp
)

add_library(core ${HEADERS} ${SOURCES})

target_include_directories(core
  PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

add_executable(penguin main.cpp)

target_link_libraries(penguin
  core
)

add_subdirectory(test)