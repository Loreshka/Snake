﻿#include "Viewer.hpp"
#include <iostream>
#include <algorithm> // pentru std::find

void Viewer::draw(const Engine& engine) {
    for (int y = 0; y < engine.height; y++) {
        for (int x = 0; x < engine.width; x++) {
            Point p(x, y);
            if (p == engine.snake.body.front())
                std::cout << "O"; // cap
            else if (std::find(engine.snake.body.begin(), engine.snake.body.end(), p) != engine.snake.body.end())
                std::cout << "o"; // corp
            else if (p == engine.apple.position)
                std::cout << "A"; // măr
            else
                std::cout << ".";
        }
        std::cout << "\n";
    }
    std::cout << "--------------\n";
}