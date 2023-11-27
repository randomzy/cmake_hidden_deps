cmake_minimum_required(VERSION 3.10)
project(cmake_hidden_deps)

# this is evil
include_directories(lib_a lib_b)

add_subdirectory(lib_a)
add_subdirectory(lib_b)

add_executable(main main.cpp)
# target_link_libraries(main libB libA)
target_link_libraries(main libA libB)
# target_link_libraries(main libB)
