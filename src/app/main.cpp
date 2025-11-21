#include "engine.hpp"
#include "viewer_console.hpp"
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <thread>

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    Engine engine(20, 10);
    ConsoleViewer viewer;
    engine.reset();

    std::ofstream log("game_log.txt");

    for (int i = 0; i < 50 && !engine.isGameOver(); ++i) {
        viewer.clearScreen();
        engine.update();
        viewer.draw(engine);
        log << "Frame " << i << ": "
            << "Head=" << engine.getSnake().getHead()
            << ", Apple=" << engine.getApple().GetPosition() << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    log << "Game Over!\n";
    std::cout << "Game Over!\n";

    return 0;
}