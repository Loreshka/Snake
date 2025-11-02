#pragma once
#include "viewer.hpp"
#include <iostream>
#include <algorithm>

class ConsoleViewer : public Viewer {
public:
    void draw(const Engine& engine) override {
        const Snake& snake = engine.getSnake();
        const Apple& apple = engine.getApple();

        for (int y = 0; y < engine.getHeight(); ++y) {
            for (int x = 0; x < engine.getWidth(); ++x) {
                Point p(x, y);
                if (p == snake.getHead())
                    std::cout << "O";
                else if (std::find(snake.getBody().begin(), snake.getBody().end(), p) != snake.getBody().end())
                    std::cout << "o";
                else if (p == apple.GetPosition())
                    std::cout << "A";
                else
                    std::cout << ".";
            }
            std::cout << "\n";
        }
        std::cout << "--------------\n";
    }
};
