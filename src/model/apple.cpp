#include "apple.hpp"

Apple::Apple() : _position(0, 0) {}
Apple::Apple(const Point& pos) : _position(pos) {}
Apple::Apple(const Apple& other) : _position(other._position) {}

Apple& Apple::operator=(const Apple& other) {
    if (this != &other)
        _position = other._position;
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

void Apple::SetPosition(const Point& p) {
    _position = p;
}

std::istream& operator>>(std::istream& in, Apple& a) {
    in >> a._position;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Apple& a) {
    out << "Apple at " << a._position;
    return out;
}