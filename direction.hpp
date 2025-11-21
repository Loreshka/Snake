#pragma once
#include <iostream>
#include <string>

enum class Direction { Up, Down, Left, Right };

std::ostream& operator<<(std::ostream& out, const Direction& dir);
