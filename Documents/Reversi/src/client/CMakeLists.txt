cmake_minimum_required(VERSION 3.8)
project(client)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        AIPlayer.cpp
        AIPlayer.h
        Board.cpp
        Board.h
        BoardSize.h
        Client.cpp
        Client.h
        ClientPlayer.cpp
        ClientPlayer.h
        Console.cpp
        Console.h
        FlipRule.cpp
        FlipRule.h
        Game.cpp
        Game.h
        Graphic.h
        main.cpp
        PcPlayer.cpp
        PcPlayer.h
        PlayerLogic.h
        PlayerSign.h
        Point.cpp
        Point.h
        Rule.h)

add_executable(client ${SOURCE_FILES})