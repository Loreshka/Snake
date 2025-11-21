#pragma once
#include <deque>
#include <algorithm>
#include "point.hpp"
#include "direction.hpp"

class Snake {
    std::deque<Point> body;
    Direction dir;
public:
    Snake();
    Snake(const Snake& other);
    Snake& operator=(const Snake& other);

    bool operator==(const Snake& other) const;
    bool operator!=(const Snake& other) const;

    void move();
    void grow();
    bool check_collision() const;

    void setDirection(Direction d);
    const std::deque<Point>& getBody() const;
    Point getHead() const;
};