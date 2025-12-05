/**
 * @file direction.hpp
 * @brief Definește enumerarea direcțiilor și funcțiile de utilitate.
 * @project Snake Game (C++)
 * @author Loreshka
 * @date 2025
 *
 * Acest fișier conține enumerarea Direction, care este utilizată pentru 
 * mișcarea șarpelui, și funcții pentru a converti tastele în direcții.
 */

#pragma once
#include <iostream>
#include <string>

/**
 * @enum Direction
 * @brief Enumerare pentru direcțiile posibile ale șarpelui.
 *
 * Valorile sunt mapate pe tastele W, A, S, D pentru control în consolă.
 */
enum class Direction: char { 
    Up       = 'W', ///< Mișcare în sus
    Down     = 'S', ///< Mișcare în jos
    Left     = 'A', ///< Mișcare spre stânga
    Right    = 'D', ///< Mișcare spre dreapta
    Unknown  = ' '  ///< Direcție necunoscută / implicită
};

/**
 * @brief Verifică dacă o tastă este direcțională (W, A, S, D).
 * @param key Tasta apăsată.
 * @return true dacă tasta este validă pentru controlul șarpelui.
 */
bool IsDirectionKey(char key);

/**
 * @brief Convertește un caracter într-o valoare Direction.
 * @param key Caracterul de intrare.
 * @return Direcția corespunzătoare sau Direction::Unknown dacă nu este validă.
 */
Direction DirectionFromChar(char key);

/**
 * @brief Operator de ieșire pentru tipărirea unei direcții.
 * @param out Fluxul de ieșire.
 * @param dir Direcția de tipărit.
 * @return referință la fluxul de ieșire.
 */
std::ostream& operator<<(std::ostream& out, const Direction& dir);
