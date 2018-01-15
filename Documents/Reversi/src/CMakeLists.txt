cmake_minimum_required(VERSION 3.8)
project(src)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS -pthread)
add_subdirectory(lib/googletest-release-1.8.0)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
set(CLIENT_SOURCE_FILES
        client/AIPlayer.cpp
        client/AIPlayer.h
        client/Board.cpp
        client/Board.h
        client/BoardSize.h
        client/Client.cpp
        client/Client.h
        client/ClientPlayer.cpp
        client/ClientPlayer.h
        client/Console.cpp
        client/Console.h
        client/FlipRule.cpp
        client/FlipRule.h
        client/Game.cpp
        client/Game.h
        client/Graphic.h
        client/main.cpp
        client/PcPlayer.cpp
        client/PcPlayer.h
        client/PlayerLogic.h
        client/PlayerSign.h
        client/Point.cpp
        client/Point.h
        client/Rule.h)
set(SERVER_SOURCE_FILES
        server/main.cpp
        server/Server.cpp
        server/Server.h
        )
file(GLOB SERVER_SOURCE_FILES ${src_SOURCE_DIR}/server/*.cpp)

set(TEST_SOURCE_FILES
        test/gtest_main.cpp
        test/test.cpp
        client/AIPlayer.cpp
        client/AIPlayer.h
        client/Board.cpp
        client/Board.h
        client/BoardSize.h
        client/Client.cpp
        client/Client.h
        client/ClientPlayer.cpp
        client/ClientPlayer.h
        client/Console.cpp
        client/Console.h
        client/FlipRule.cpp
        client/FlipRule.h
        client/Game.cpp
        client/Game.h
        client/Graphic.h
        client/PcPlayer.cpp
        client/PcPlayer.h
        client/PlayerLogic.h
        client/PlayerSign.h
        client/Point.cpp
        client/Point.h
        client/Rule.h)


add_executable(client ${CLIENT_SOURCE_FILES})
add_executable(server ${SERVER_SOURCE_FILES})
add_executable(maintesting ${TEST_SOURCE_FILES})
target_link_libraries(maintesting gtest gtest_main)