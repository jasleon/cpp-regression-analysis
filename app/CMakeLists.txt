add_executable(calc calc.cpp)
target_link_libraries(calc arith)

# Minimal examples of the external dependencies
add_executable(sciplot_ex sciplot_ex.cpp)
add_executable(eigen_ex eigen_ex.cpp)
add_executable(csv_ex csv_ex.cpp)
target_link_libraries(csv_ex csv)
