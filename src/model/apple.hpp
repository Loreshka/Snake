#pragma once
#include <iostream>
#include <memory>
#include "point.hpp"

class Apple {
    Point _position;
public:
    Apple();
    Apple(const Point& pos);
    Apple(const Apple& other);
    Apple& operator=(const Apple& other);

    bool operator==(const Apple& other) const;
    bool operator!=(const Apple& other) const;

    Point GetPosition() const;
    void SetPosition(const Point& p);

    friend std::istream& operator>>(std::istream& in, Apple& a);
    friend std::ostream& operator<<(std::ostream& out, const Apple& a);
};