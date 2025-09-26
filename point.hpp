#ifndef POINT_HPP
#define POINT_HPP

struct Point {
    int x, y;

    Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}

    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

#endif
