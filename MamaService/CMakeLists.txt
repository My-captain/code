cmake_minimum_required(VERSION 3.22)
project(code)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(/usr/local/include)
#target_link_libraries(/usr/local/lib/libmodel_slice_reader.so)

add_executable(code
        MamaService.cpp
        )
