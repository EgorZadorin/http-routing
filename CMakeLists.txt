cmake_minimum_required(VERSION 3.23)
project(http-routing)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(external_lib/cista)
add_subdirectory(external_lib/net)
include_directories(external_lib/net/include)
include_directories(external_lib/net/deps/boost)

file(GLOB_RECURSE http-server-src src/http_server/*.cc)
add_library(http-server ${http-server-src})

include_directories(include)

file(GLOB_RECURSE http-routing-files src/*.cc)
add_executable(http-routing ${http-routing-files})

target_link_libraries(http-routing
        cista
        http-server
        )

set_target_properties(
        http-routing
        PROPERTIES COMPILE_FLAGS
        "-Wall -Wextra"
)