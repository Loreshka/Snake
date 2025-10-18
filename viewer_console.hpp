#pragma once
#include "Viewer.hpp"
#include <iostream>
#include <algorithm>

class ConsoleViewer : public Viewer {
public:
    void draw(const Engine& engine) override {
        for (int y = 0; y < engine.height; ++y) {
            for (int x = 0; x < engine.width; ++x) {
                Point p(x, y);
                if (p == engine.snake.body.front())
                    std::cout << "O";
                else if (std::find(engine.snake.body.begin(), engine.snake.body.end(), p) != engine.snake.body.end())
                    std::cout << "o";
                else if (p == engine.apple.GetPosition())
                    std::cout << "A";
                else
                    std::cout << ".";
            }
            std::cout << "\n";
        }
        std::cout << "--------------\n";
    }
};
