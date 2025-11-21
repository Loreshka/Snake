#include "engine.hpp"
#include <cstdlib>

Engine::Engine(int w, int h)
    : snake(std::make_unique<Snake>()),
      apple(std::make_unique<Apple>()),
      width(w), height(h), game_over(false) {}

void Engine::reset() {
    *snake = Snake();
    apple->SetPosition(Point(rand() % width, rand() % height));
    game_over = false;
}

void Engine::update() {
    if (game_over) return;

    snake->move();

    if (snake->getHead() == apple->GetPosition()) {
        snake->grow();
        apple->SetPosition(Point(rand() % width, rand() % height));
    }

    if (snake->check_collision()) {
        game_over = true;
    }

    Point head = snake->getHead();
    if (head.x < 0 || head.x >= width || head.y < 0 || head.y >= height)
        game_over = true;
}

bool Engine::isGameOver() const { return game_over; }
const Snake& Engine::getSnake() const { return *snake; }
const Apple& Engine::getApple() const { return *apple; }
int Engine::getWidth() const { return width; }
int Engine::getHeight() const { return height; }
