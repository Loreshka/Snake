#pragma once
#include <memory>
#include <iostream>
#include "snake.hpp"
#include "apple.hpp"

class Engine {
    std::unique_ptr<Snake> snake;
    std::unique_ptr<Apple> apple;
    int width;
    int height;
    bool game_over;
public:
    Engine(int w = 20, int h = 10);
    void reset();
    void update();

    bool isGameOver() const;
    const Snake& getSnake() const;
    const Apple& getApple() const;
    int getWidth() const;
    int getHeight() const;
};
