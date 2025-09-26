#include "Engine.hpp"
#include "Viewer.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand((unsigned)time(0));
    Engine engine{ Snake(), Apple(), 20, 10, false };
    Viewer viewer;

    engine.reset();

    for (int i = 0; i < 20 && !engine.game_over; i++) {
        engine.update();
        viewer.draw(engine);
    }

    std::cout << "Game Over!\n";
    return 0;
}
