#include "direction.hpp"

bool IsDirectionKey(char key) {
    key = std::tolower(key);
    return key == 'w' || key == 'a' || key == 's' || key == 'd';
}

Direction DirectionFromChar(char key) {
    key = std::tolower(key);
    switch (key) {
        case 'w': return Direction::Up;
        case 's': return Direction::Down;
        case 'a': return Direction::Left;
        case 'd': return Direction::Right;
        default:  return Direction::Unknown;
    }
}

std::ostream& operator<<(std::ostream& out, const Direction& dir) {
    switch (dir) {
        case Direction::Up: out << "Up"; break;
        case Direction::Down: out << "Down"; break;
        case Direction::Left: out << "Left"; break;
        case Direction::Right: out << "Right"; break;
    }
    return out;
}