cmake_minimum_required(VERSION 3.2)

project(cpp-regression-analysis VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

# We need to use include instead of add_subdirectory to avoid scope issues
# Check section 7.1.2 Scope from "Professional CMake" by Craig Scott
include(dependencies/CMakeLists.txt)
add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(tests)
