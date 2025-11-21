#include "json.hpp"
#include <fstream>

#include "engine.hpp"
#include <cstdlib>

#include <windows.h>


Engine::Engine(int w, int h)
    : snake(std::make_unique<Snake>()),
    apple(std::make_unique<Apple>()),
    width(w), height(h), game_over(false) {
}

void Engine::reset() {
    *snake = Snake();
    apple->SetPosition(Point(rand() % width, rand() % height));
    game_over = false;
}
void Engine::loadScore() {
    std::ifstream file("score.json");
    if (!file.is_open()) return;

    nlohmann::json j;
    file >> j;

    int high = j["highscore"];
    std::cout << "Scor maxim anterior: " << high << std::endl;
}

void Engine::update() {
    if (game_over) return;

    char key = ReadKeyAsync();
    if (IsDirectionKey(key) && DirectionFromChar(key) != Direction::Unknown) {
        snake->setDirection(DirectionFromChar(key));
    }

    if(key == 'q') {
        game_over = true;
        return;
    }

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

void Engine::saveScore(int score) {
    nlohmann::json j;
    j["highscore"] = score;

    std::ofstream file("score.json");
    file << j.dump(4);
}

char Engine::ReadKeyAsync() const {
    if (
        (GetAsyncKeyState(VK_UP) & 0x8000) ||
        (GetAsyncKeyState('W') & 0x8000) ||
        (GetAsyncKeyState('w') & 0x8000))
    {
        return 'w';
    }
    if (
        (GetAsyncKeyState(VK_DOWN) & 0x8000) ||
        (GetAsyncKeyState('S') & 0x8000) ||
        (GetAsyncKeyState('s') & 0x8000))
    {
        return 's';
    }
    if (
        (GetAsyncKeyState(VK_LEFT) & 0x8000) ||
        (GetAsyncKeyState('A') & 0x8000) ||
        (GetAsyncKeyState('a') & 0x8000))
    {
        return 'a';
    }
    if (
        (GetAsyncKeyState(VK_RIGHT) & 0x8000) ||
        (GetAsyncKeyState('D') & 0x8000) ||
        (GetAsyncKeyState('d') & 0x8000))
    {
        return 'd';
    }
    if (
        (GetAsyncKeyState(VK_ESCAPE) & 0x8000) ||
        (GetAsyncKeyState('Q') & 0x8000) ||
        (GetAsyncKeyState('q') & 0x8000))
    {
        return 'q';
    }

    return '\0';
}