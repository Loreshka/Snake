#include "Apple.hpp"
#include <cstdlib>

void Apple::regenerate(int width, int height) {
    position.x = rand() % width;
    position.y = rand() % height;
}
