#include "Viewer.hpp"
#include <iostream>
#include <algorithm> // pentru std::find

void Viewer::draw(const Engine& engine) {
    for (int y = 0; y < engine.getHeight(); y++) {
        for (int x = 0; x < engine.getWidth(); x++) {
            Point p(x, y);
            if (p == engine.getSnake().getBody().front())
                std::cout << "O"; // cap
            else if (std::find(engine.getSnake().getBody().begin(), engine.getSnake().getBody().end(), p) != engine.getSnake().getBody().end())
                std::cout << "o"; // corp
            else if (p == engine.getApple().GetPosition())
                std::cout << "A"; // măr
            else
                std::cout << ".";
        }
        std::cout << "\n";
    }
    std::cout << "--------------\n";
}