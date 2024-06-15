cmake_minimum_required(VERSION 3.10)

project(colorie LANGUAGES C VERSION 0.0.1)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_library(colorie STATIC src/colorie.c)
target_include_directories(colorie PUBLIC include)

add_executable(colorie_test example/test.c)
target_link_libraries(colorie_test PRIVATE colorie)
target_include_directories(colorie_test PUBLIC include)
