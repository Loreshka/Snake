#pragma once
#include <iostream>
#include "point.hpp"

class Apple {
private:
    Point _position;

public:
    Apple();                          // constructor implicit
    Apple(const Point& position);     // constructor cu parametri
    Apple(const Apple& other);        // constructor de copiere

    Apple& operator=(const Apple& other); // operator de atribuire
    bool operator==(const Apple& other) const; // operator de comparare
    bool operator!=(const Apple& other) const;

    Point GetPosition() const;

    friend std::istream& operator>>(std::istream& in, Apple& apple);
    friend std::ostream& operator<<(std::ostream& out, const Apple& apple);
};



