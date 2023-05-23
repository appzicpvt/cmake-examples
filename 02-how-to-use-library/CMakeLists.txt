cmake_minimum_required(VERSION 3.20.0)

project(02-how-to-use-library VERSION 1.0.0)

add_library(
    say-hello
    hello.cpp
    hello.h
)

add_executable(a.out main.cpp)

target_link_libraries(a.out
    PRIVATE
        say-hello
)
