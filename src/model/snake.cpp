#include "snake.hpp"

Snake::Snake() : dir(Direction::Right) {
    body.push_back(Point(5, 5));
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
        case Direction::Up: new_head.y--; break;
        case Direction::Down: new_head.y++; break;
        case Direction::Left: new_head.x--; break;
        case Direction::Right: new_head.x++; break;
    }

    body.push_front(new_head);
    body.pop_back();
}

void Snake::grow() {
    body.push_back(body.back());
}

bool Snake::check_collision() const {
    Point head = body.front();
    return std::find(body.begin() + 1, body.end(), head) != body.end();
}

void Snake::setDirection(Direction d) {
    dir = d;
}

const std::deque<Point>& Snake::getBody() const {
    return body;
}

Point Snake::getHead() const {
    return body.front();
}