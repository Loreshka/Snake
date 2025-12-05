/**
 * @file engine.hpp
 * @brief Motorul jocului - logică, stare, actualizare, stocare scor.
 * @project Snake Game (C++)
 * @author Loreshka
 * @date 2025
 *
 * Engine coordonează interacțiunea dintre Snake, Apple și regulile
 * de joc: mutare, coliziuni, generare măr, reset, persistare scor.
 */

#pragma once

#include <memory>
#include <iostream>
#include "snake.hpp"
#include "apple.hpp"

/**
 * @class Engine
 * @brief Gestionează starea jocului și logica principală.
 *
 * Engine conține un Snake și un Apple, dimensiunile tablei și flagul
 * game_over. De asemenea poate salva/încărca scorul (implementare
 * dependentă de platformă).
 */
class Engine {
    std::unique_ptr<Snake> snake; ///< șarpele din joc
    std::unique_ptr<Apple> apple; ///< mărul din joc
    int width;                    ///< lățimea tablei
    int height;                   ///< înălțimea tablei
    bool game_over;               ///< flag de sfârșit joc

    /**
     * @brief Salvează scorul curent (persistență locală).
     * @param score Scorul de salvat.
     *
     * Observație: implementarea poate scrie într-un fișier local.
     */
    void saveScore(int score);

    /**
     * @brief Încarcă scorul salvat (dacă există).
     */
    void loadScore();

public:
    /**
     * @brief Constructor Engine cu dimensiuni implicite.
     * @param w lățime (implicit 20)
     * @param h înălțime (implicit 10)
     */
    Engine(int w = 20, int h = 10);

    /**
     * @brief Resetează starea jocului pentru o nouă rundă.
     */
    void reset();

    /**
     * @brief Actualizează starea jocului (mută șarpele, verifică coliziuni,
     *        verifică consum de măr, generează măr nou, setează game_over).
     */
    void update();

    /**
     * @brief Indică dacă jocul s-a terminat.
     * @return true dacă jocul este în stare de "game over".
     */
    bool isGameOver() const;

    /**
     * @brief Acces la Snake (const).
     * @return referință constantă la Snake intern.
     */
    const Snake& getSnake() const;

    /**
     * @brief Acces la Apple (const).
     * @return referință constantă la Apple intern.
     */
    const Apple& getApple() const;

    /**
     * @brief Returnează lățimea tablei.
     * @return int lățimea.
     */
    int getWidth() const;

    /**
     * @brief Returnează înălțimea tablei.
     * @return int înălțimea.
     */
    int getHeight() const;

    /**
     * @brief Citește o tastă asincron (non-blocant) — wrapper platform dependent.
     * @return char tasta citită sau valoare nulă dacă nu a fost apăsată nicio tastă.
     *
     * Observație: implementarea efectivă depinde de modul în care este tratată
     * intrarea la nivel de consolă/OS.
     */
    char ReadKeyAsync() const;
};

