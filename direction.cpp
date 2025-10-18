#include "direction.hpp"

std::ostream& operator<<(std::ostream& out, const Direction& dir) {
    switch (dir) {
        case Direction::Up: out << "Up"; break;
        case Direction::Left: out << "Left"; break;
        case Direction::Right: out << "Right"; break;
        case Direction::Down: out << "Down"; break;
    }
    return out;
}

