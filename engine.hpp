#ifndef ENGINE_HPP
#define ENGINE_HPP

#include "Snake.hpp"
#include "Apple.hpp"

struct Engine {
    Snake snake;
    Apple apple;
    int width, height;
    bool game_over;

    void update();
    void reset();
};

#endif // ENGINE_HPP
