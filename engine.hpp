#pragma once
#include "snake.hpp"
#include "apple.hpp"

class Engine {
public:
    Snake snake;
    Apple apple;
    int width, height;
    bool game_over;

    Engine(int w = 20, int h = 10);

    void update();
    void reset();
};


