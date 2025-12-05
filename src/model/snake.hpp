/**
 * @file snake.hpp
 * @brief Definirea clasei Snake - corpul și comportamentul șarpelui din joc.
 * @project Snake Game (C++)
 * @author Loreshka
 * @date 2025
 *
 * Clasa Snake gestionează pozițiile segmentelor corpului, direcția
 * curentă și operațiile de mișcare / creștere / verificare coliziune.
 */

#pragma once

#include <deque>
#include <algorithm>
#include "point.hpp"
#include "direction.hpp"

/**
 * @class Snake
 * @brief Reprezintă șarpele din joc (lista de segmente și direcția).
 *
 * Corpul este stocat ca un std::deque<Point> pentru inserții/ștergeri
 * eficiente la capete. Clasa oferă funcții pentru mutare, creștere
 * și verificare a coliziunilor.
 */
class Snake {
    std::deque<Point> body;   ///< segmentele corpului, capul este la front()
    Direction dir;            ///< direcția curentă de deplasare

public:
    /**
     * @brief Construiește un Snake implicit.
     * Inițializează corpul cu o poziție implicită și direcția Unknown.
     */
    Snake();

    /**
     * @brief Copy constructor.
     * @param other Obiectul Snake din care se copiază starea.
     */
    Snake(const Snake& other);

    /**
     * @brief Operator de atribuire.
     * @param other Snake-ul sursă.
     * @return referință la obiectul curent.
     */
    Snake& operator=(const Snake& other);

    /**
     * @brief Compară două obiecte Snake pentru egalitate (poziții și direcție).
     * @param other Snake-ul de comparat.
     * @return true dacă sunt identice.
     */
    bool operator==(const Snake& other) const;

    /**
     * @brief Inversa operatorului ==.
     * @param other Snake-ul de comparat.
     * @return true dacă sunt diferite.
     */
    bool operator!=(const Snake& other) const;

    /**
     * @brief Mută șarpele cu un pas în direcția curentă.
     *
     * Implementarea tipică:
     * - se calculează noul cap pe baza direcției
     * - se adaugă noul cap la front()
     * - se elimină ultimul segment (cu excepția când s-a apelat grow())
     */
    void move();

    /**
     * @brief Marchează șarpele pentru a crește la următoarea mutare.
     *
     * Implementare uzuală: nu se elimină ultimul segment la următoarea
     * mutare, astfel corpul crește cu 1.
     */
    void grow();

    /**
     * @brief Verifică coliziunea șarpelui cu sine însuși (sau alte reguli).
     * @return true dacă a avut loc o coliziune (de ex. cap == segment intern).
     */
    bool check_collision() const;

    /**
     * @brief Setează direcția șarpelui.
     * @param d Direcția dorită.
     *
     * Observație: implementarea ar trebui să prevină inversarea directă
     * (ex. Left <- Right).
     */
    void setDirection(Direction d);

    /**
     * @brief Acces la containerul corpului.
     * @return referință constantă la deque-ul cu segmente.
     */
    const std::deque<Point>& getBody() const;

    /**
     * @brief Obține poziția capului șarpelui.
     * @return Point reprezentând capul.
     */
    Point getHead() const;
};
