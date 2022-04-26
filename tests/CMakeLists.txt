add_executable(unit_arith main.cpp test_arith.cpp)
target_link_libraries(unit_arith arith gtest_main)

add_executable(unit_etl main.cpp test_etl.cpp)
target_link_libraries(unit_etl etl gtest_main)
