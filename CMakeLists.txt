cmake_minimum_required(VERSION 3.2)

project(cpp-regression-analysis VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(dependencies)
add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(tests)
