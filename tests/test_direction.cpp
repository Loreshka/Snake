#include "../src/direction.hpp"
#include <cassert>
#include <iostream>

int main() {
    assert(IsDirectionKey('W'));
    assert(IsDirectionKey('A'));
    assert(IsDirectionKey('S'));
    assert(IsDirectionKey('D'));
    assert(!IsDirectionKey('X'));

    assert(DirectionFromChar('W') == Direction::Up);
    assert(DirectionFromChar('Z') == Direction::Unknown);

    std::cout << "[OK] Direction tests passed\n";
    return 0;
}
