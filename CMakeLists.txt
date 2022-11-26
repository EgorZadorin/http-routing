cmake_minimum_required(VERSION 3.23)
project(http-routing)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(cista)

add_executable(http-routing main.cpp)

target_link_libraries(http-routing cista)