#include "../src/apple.hpp"
#include <cassert>
#include <iostream>

int main() {
    Apple a1(Point(3,4));
    Apple a2(Point(3,4));
    Apple a3(Point(9,1));

    assert(a1 == a2);
    assert(a1 != a3);

    a3 = a1;
    assert(a3 == a1);

    std::cout << "[OK] Apple tests passed\n";
    return 0;
}
