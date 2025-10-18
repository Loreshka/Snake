#include "snake.hpp"

Snake::Snake() : dir(Direction::Right) {
    body.push_back(Point(0, 0));
}

Snake::Snake(const Snake& other) : body(other.body), dir(other.dir) {}

Snake& Snake::operator=(const Snake& other) {
    if (this != &other) {
        body = other.body;
        dir = other.dir;
    }
    return *this;
}

bool Snake::operator==(const Snake& other) const {
    return body == other.body && dir == other.dir;
}

bool Snake::operator!=(const Snake& other) const {
    return !(*this == other);
}

void Snake::move() {
    Point new_head = body.front();
    switch (dir) {
        case Direction::Up:    new_head.y--; break;
        case Direction::Down:  new_head.y++; break;
        case Direction::Left:  new_head.x--; break;
        case Direction::Right: new_head.x++; break;
    }
    body.insert(body.begin(), new_head);
    body.pop_back();
}

void Snake::grow() {
    body.push_back(body.back());
}

bool Snake::check_collision() const {
    Point head = body.front();
    for (size_t i = 1; i < body.size(); ++i)
        if (body[i] == head) return true;
    return false;
}


