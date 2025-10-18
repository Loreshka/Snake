#pragma once
#include <iostream>

enum class Direction {
    Up, Left, Right, Down
};

// Operator de ieșire
std::ostream& operator<<(std::ostream& out, const Direction& dir);
