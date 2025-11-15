#include "engine.hpp"
#include "console_viewer.hpp"
#include <ctime>
#include <cstdlib>
#include <fstream>

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    Engine engine(20, 10);
    ConsoleViewer viewer;
    engine.reset();

    std::ofstream log("game_log.txt");

    for (int i = 0; i < 50 && !engine.isGameOver(); ++i) {
        engine.update();
        viewer.draw(engine);
        log << "Frame " << i << ": "
            << "Head=" << engine.getSnake().getHead()
            << ", Apple=" << engine.getApple().GetPosition() << "\n";
    }

    log << "Game Over!\n";
    std::cout << "Game Over!\n";

    return 0;
}