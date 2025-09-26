#ifndef SNAKE_HPP
#define SNAKE_HPP

#include <vector>
#include "Point.hpp"
#include "Direction.hpp"

struct Snake {
    std::vector<Point> body;
    Direction dir;

    void move();
    void grow();
    bool check_collision();
};

#endif
