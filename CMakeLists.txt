cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(ci_cd_example VERSION 1.0.0 LANGUAGES CXX)

# To enable CTest
enable_testing()

# Production library
add_library(car_lib src/Car.cpp)
target_include_directories(car_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)

# Application Executable
add_executable(ci_cd_example src/main.cpp)
target_link_libraries(ci_cd_example car_lib)

# Test Executable
add_executable(car_test tests/test.cpp)
target_link_libraries(car_test car_lib gtest gtest_main pthread)

add_test(NAME CarTests COMMAND car_test)
