#include "../src/snake.hpp"
#include <cassert>
#include <iostream>

int main() {
    Snake s;

    // Test direcție
    s.setDirection(Direction::Right);
    assert(s.getHead().x == s.getBody().front().x);

    // Test creștere
    int size_before = s.getBody().size();
    s.grow();
    assert(s.getBody().size() == size_before + 1);

    std::cout << "[OK] Snake tests passed\n";
    return 0;
}
