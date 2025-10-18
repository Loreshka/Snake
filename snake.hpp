#pragma once
#include <vector>
#include "point.hpp"
#include "direction.hpp"

class Snake {
public:
    std::vector<Point> body;
    Direction dir;

    Snake();
    Snake(const Snake& other);
    Snake& operator=(const Snake& other);

    bool operator==(const Snake& other) const;
    bool operator!=(const Snake& other) const;

    void move();
    void grow();
    bool check_collision() const;
};
