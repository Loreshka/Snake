#include "engine.hpp"
#include <cstdlib>

Engine::Engine(int w, int h) : width(w), height(h), game_over(false) {}

void Engine::reset() {
    snake.body.clear();
    snake.body.push_back(Point(width / 2, height / 2));
    snake.dir = Direction::Right;
    // Regenerare măr la o poziție random
    apple = Apple(Point(rand() % width, rand() % height));
    game_over = false;
}

void Engine::update() {
    if (game_over) return;

    snake.move();

    // coliziune cu mărul
    if (snake.body.front() == apple.GetPosition()) {
        snake.grow();
        apple = Apple(Point(rand() % width, rand() % height));
    }

    // coliziune cu sine
    if (snake.check_collision()) {
        game_over = true;
    }

    // coliziune cu pereții
    Point head = snake.body.front();
    if (head.x < 0 || head.x >= width || head.y < 0 || head.y >= height)
        game_over = true;
}

