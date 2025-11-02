#pragma once
#include "engine.hpp"

class Viewer {
public:
    virtual void draw(const Engine& engine) = 0;
    virtual ~Viewer() = default;
};
