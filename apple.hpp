#ifndef APPLE_HPP
#define APPLE_HPP

#include "Point.hpp"

struct Apple {
    Point position;

    void regenerate(int width, int height);
};

#endif // APPLE_HPP