#include "Engine.hpp"

void Engine::reset() {
    snake.body.clear();
    snake.body.push_back({ width / 2, height / 2 });
    snake.dir = RIGHT;
    apple.regenerate(width, height);
    game_over = false;
}

void Engine::update() {
    if (game_over) return;

    snake.move();

    // coliziune cu mărul
    if (snake.body.front() == apple.position) {
        snake.grow();
        apple.regenerate(width, height);
    }

    // coliziune cu sine
    if (snake.check_collision()) {
        game_over = true;
    }

    // coliziune cu pereții
    Point head = snake.body.front();
    if (head.x < 0 || head.x >= width || head.y < 0 || head.y >= height) {
        game_over = true;
    }
}
