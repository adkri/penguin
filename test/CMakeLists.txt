cmake_minimum_required(VERSION 3.15)

set(SOURCES
  PenguinTest.cpp
)

add_executable(penguin_test ${SOURCES})
target_link_libraries(penguin_test PUBLIC
  gtest_main
  core
)

add_test(
  NAME penguin_test
  COMMAND penguin_test
)