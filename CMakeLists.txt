cmake_minimum_required(VERSION 3.11)
project(serverapi LANGUAGES C CXX)

if(UNIX)
    add_compile_definitions(-DHAVE_STDINT_H -DLINUX)
elseif(WIN32)
    add_compile_definitions(-DHAVE_STDINT_H -DWIN32)
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/raknet)

file(GLOB_RECURSE FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
add_library(sapi STATIC ${FILES})

message(${CMAKE_CURRENT_SOURCE_DIR})