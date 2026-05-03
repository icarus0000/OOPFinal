#pragma once
#include "GameObject.h"

class Player : public GameObject {
private:
    float speed;

public:
    Player(float startX, float startY);
    
    void Update() override; 
    void Draw() override;
};