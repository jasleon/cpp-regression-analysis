add_executable(unit_arith main.cpp test_arith.cpp)
target_link_libraries(unit_arith arith gtest_main)
