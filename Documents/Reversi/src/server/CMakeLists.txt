cmake_minimum_required(VERSION 3.8)
project(server)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        Server.cpp
        Server.h
        Command.h
        StartGame.h
        StartGame.cpp)

add_executable(main ${SOURCE_FILES})