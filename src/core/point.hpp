#pragma once
#include <iostream>
#include <string>

struct Point {
    int x{};
    int y{};

    Point(int _x = 0, int _y = 0);
    Point(const Point& other);
    Point& operator=(const Point& other);

    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;

    friend std::istream& operator>>(std::istream& in, Point& p);
    friend std::ostream& operator<<(std::ostream& out, const Point& p);
};
