cmake_minimum_required(VERSION 3.10)
project(C++_MASTER)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)#可执行文件输出到bin
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)#静态库输出到lib
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)#动态库输出到lib

# 添加子目录
add_subdirectory(src/utils)
add_subdirectory(src/lessons)

