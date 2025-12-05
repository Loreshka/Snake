/**
 * @file viewer.hpp
 * @brief Interfața pentru vizualizarea stării jocului.
 * @project Snake Game (C++) 
 * @author Loreshka
 * @date 2025
 *
 * Viewer este o interfață abstractă (polimorfism) folosită pentru
 * a desena starea jocului (consolă, GUI etc.). Implementări concrete
 * (ex: ConsoleViewer) vor deriva din această clasă.
 */

#pragma once

#include "engine.hpp"

/**
 * @class Viewer
 * @brief Interfață abstractă pentru desenarea jocului.
 *
 * Metodele trebuie implementate de clasele care oferă reprezentare
 * vizuală (console, SDL, etc.).
 */
class Viewer {
public:
    /**
     * @brief Curăță ecranul / suprafața de desen.
     */
    virtual void clearScreen() = 0;

    /**
     * @brief Desenează starea curentă a jocului.
     * @param engine Referință la motorul de joc din care se extrag datele.
     */
    virtual void draw(const Engine& engine) = 0;

    /**
     * @brief Destructor virtual pentru curățare corectă în ierarhii derivate.
     */
    virtual ~Viewer() = default;
};
