#include "apple.hpp"

Apple::Apple() : _position(0, 0) {}
Apple::Apple(const Point& position) : _position(position) {}
Apple::Apple(const Apple& other) : _position(other._position) {}

Apple& Apple::operator=(const Apple& other) {
    if (this != &other) {
        _position = other._position;
    }
    return *this;
}

bool Apple::operator==(const Apple& other) const {
    return _position == other._position;
}

bool Apple::operator!=(const Apple& other) const {
    return !(*this == other);
}

Point Apple::GetPosition() const {
    return _position;
}

std::istream& operator>>(std::istream& in, Apple& apple) {
    Point position;
    in >> position;
    apple = Apple(position);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Apple& apple) {
    out << apple.GetPosition();
    return out;
}

