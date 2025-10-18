#pragma once
#include "Engine.hpp"

class Viewer {
public:
    virtual void draw(const Engine& engine) = 0; // metodă pură
    virtual ~Viewer() = default;
};


