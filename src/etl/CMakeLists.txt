file(
    GLOB_RECURSE etl_source_files
    ${CMAKE_CURRENT_LIST_DIR}/*.cpp
)
add_library(etl ${etl_source_files})
target_include_directories(
    etl
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
target_link_libraries(etl csv)
