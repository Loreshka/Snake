#include "../src/point.hpp"
#include <cassert>
#include <iostream>

int main() {
    Point p1(2,3);
    Point p2(2,3);
    Point p3(5,1);

    assert(p1 == p2);
    assert(p1 != p3);

    p3 = p1;
    assert(p3 == p1);

    std::cout << "[OK] Point tests passed\n";
    return 0;
}

