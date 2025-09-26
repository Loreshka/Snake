#include "Snake.hpp"

void Snake::move() {
    Point new_head = body.front();
    switch (dir) {
    case UP:    new_head.y--; break;
    case DOWN:  new_head.y++; break;
    case LEFT:  new_head.x--; break;
    case RIGHT: new_head.x++; break;
    }
    body.insert(body.begin(), new_head);
    body.pop_back();
}

void Snake::grow() {
    body.push_back(body.back());
}

bool Snake::check_collision() {
    Point head = body.front();
    for (size_t i = 1; i < body.size(); i++) {
        if (body[i] == head) return true;
    }
    return false;
}
