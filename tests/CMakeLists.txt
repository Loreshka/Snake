cmake_minimum_required(VERSION 3.16)
project(SnakeGame)

set(CMAKE_CXX_STANDARD 20)

add_executable(Snake
    main.cpp
    direction.cpp
    point.cpp
    snake.cpp
    apple.cpp
    engine.cpp
    viewer.cpp
)

# GoogleTest
enable_testing()
find_package(GTest REQUIRED)

add_executable(Tests
    tests/test_point.cpp
    tests/test_direction.cpp
    tests/test_snake.cpp
    tests/test_engine.cpp
    point.cpp
    direction.cpp
    snake.cpp
    apple.cpp
    engine.cpp
)

target_link_libraries(Tests GTest::gtest GTest::gtest_main)
add_test(NAME AllTests COMMAND Tests)
