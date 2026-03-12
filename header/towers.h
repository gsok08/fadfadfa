#pragma once
#include "raylib.h"
#include <vector>
#include "bloons.h"

class Tower {
public:
    Vector2 position;
    float range;
    float fireRate; // Seconds between shots
    float timer;    // Tracks time since last shot

    Tower(Vector2 pos);
    void Update(std::vector<Bloon>& bloons);
    void Draw();
};
