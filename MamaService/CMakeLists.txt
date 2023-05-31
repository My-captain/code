cmake_minimum_required(VERSION 3.22)
project(MamaService)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(/usr/local/include)
link_directories(/usr/local/lib)

add_executable(MamaService
        MamaService.cpp
        )

target_link_libraries(MamaService model_slice_reader)
