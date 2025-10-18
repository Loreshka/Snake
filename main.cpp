#include "engine.hpp"
#include "viewer_console.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

int main() {
    srand((unsigned)time(nullptr));
    Engine engine(20, 10);
    ConsoleViewer viewer;

    engine.reset();

    for (int i = 0; i < 50 && !engine.game_over; ++i) {
        engine.update();
        viewer.draw(engine);
    }

    std::cout << "Game Over!\n";
    return 0;
}

