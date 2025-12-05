/**
 * @file apple.hpp
 * @brief Definirea obiectului Apple (măr) din joc.
 * @project Snake Game (C++)
 * @author Loreshka
 * @date 2025
 *
 * Apple reține poziția fructului și oferă operații de citire / scriere
 * pentru interacțiune simplă.
 */

#pragma once

#include <iostream>
#include <memory>
#include "point.hpp"

/**
 * @class Apple
 * @brief Reprezintă mărul poziționat pe tabla de joc.
 *
 * Apple reține poziția curentă și oferă getter/setter pentru aceasta.
 * De asemenea suportă citire/afisare prin fluxuri.
 */
class Apple {
    Point _position;  ///< poziția curentă a mărului

public:
    /**
     * @brief Constructor implicit - poziție (0,0).
     */
    Apple();

    /**
     * @brief Constructor cu poziție.
     * @param pos Poziția inițială a mărului.
     */
    Apple(const Point& pos);

    /**
     * @brief Copy constructor.
     * @param other Apple de copiat.
     */
    Apple(const Apple& other);

    /**
     * @brief Operator de atribuire.
     * @param other Apple-ul sursă.
     * @return referință la obiectul curent.
     */
    Apple& operator=(const Apple& other);

    /**
     * @brief Comparare egalitate între mere (pe baza poziției).
     * @param other Apple de comparat.
     * @return true dacă pozițiile sunt egale.
     */
    bool operator==(const Apple& other) const;

    /**
     * @brief Negarea operatorului ==.
     * @param other Apple de comparat.
     * @return true dacă pozițiile sunt diferite.
     */
    bool operator!=(const Apple& other) const;

    /**
     * @brief Returnează poziția curentă a mărului.
     * @return Point poziția mărului.
     */
    Point GetPosition() const;

    /**
     * @brief Setează poziția mărului.
     * @param p Noua poziție.
     */
    void SetPosition(const Point& p);

    /**
     * @brief Citire din flux pentru Apple (de exemplu: "x y").
     * @param in Fluxul de intrare.
     * @param a Apple referință de umplut.
     * @return referință la fluxul de intrare.
     */
    friend std::istream& operator>>(std::istream& in, Apple& a);

    /**
     * @brief Scriere în flux a Apple (de ex. pentru debugging).
     * @param out Fluxul de ieșire.
     * @param a Apple de afișat.
     * @return referință la fluxul de ieșire.
     */
    friend std::ostream& operator<<(std::ostream& out, const Apple& a);
};
