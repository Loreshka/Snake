#pragma once
#include <iostream>
#include <string>

enum class Direction: char { 
    Up       = 'W',
    Down     = 'S', 
    Left     = 'A', 
    Right    = 'D',
    Unknown  = ' ' 
};

/**
 * @brief Check if the given key corresponds to a direction.
 * @param key The key to check.
 * @return true if the key is a direction key, false otherwise.
 */
bool IsDirectionKey(char key);

/**
 * @brief Convert a character key to a Direction enum.
 * @param key The character key.
 * @return The corresponding Direction enum value.
 */
Direction DirectionFromChar(char key);

std::ostream& operator<<(std::ostream& out, const Direction& dir);