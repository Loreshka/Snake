/**
 * @file point.hpp
 * @brief Structură pentru un punct în coordonate 2D pe tabla jocului.
 * @project Snake Game (C++) 
 * @date 2025
 * @author Loreshka
 *
 * Reprezintă o poziție în plan, folosită pentru pozițiile șarpelui și ale mărului.
 */

#pragma once
#include <iostream>

/**
 * @struct Point
 * @brief Reprezintă o coordonată (x, y) pe tabla de joc.
 *
 * Punctele sunt comparabile și pot fi citite/scrise în fluxuri.
 */
struct Point {
    int x{}; ///< coordonata X
    int y{}; ///< coordonata Y

    /**
     * @brief Creează un punct cu coordonate (x, y).
     * @param _x Coordonata X.
     * @param _y Coordonata Y.
     */
    Point(int _x = 0, int _y = 0);

    /**
     * @brief Copy constructor.
     * @param other Punctul de copiat.
     */
    Point(const Point& other);

    /**
     * @brief Operator de atribuire.
     * @param other Punctul sursă.
     * @return referință la obiectul curent.
     */
    Point& operator=(const Point& other);

    /**
     * @brief Compară două puncte pentru egalitate.
     * @param other Punctul cu care se compară.
     * @return true dacă x și y sunt egale.
     */
    bool operator==(const Point& other) const;

    /**
     * @brief Compară două puncte pentru inegalitate.
     * @param other Punctul comparat.
     * @return true dacă x sau y diferă.
     */
    bool operator!=(const Point& other) const;

    /**
     * @brief Operator de citire din flux.
     * @param in Fluxul de intrare.
     * @param p Punctul rezultat.
     * @return referință la fluxul de intrare.
     */
    friend std::istream& operator>>(std::istream& in, Point& p);

    /**
     * @brief Operator de scriere în flux.
     * @param out Fluxul de ieșire.
     * @param p Punctul de scris.
     * @return referință la fluxul de ieșire.
     */
    friend std::ostream& operator<<(std::ostream& out, const Point& p);
};
