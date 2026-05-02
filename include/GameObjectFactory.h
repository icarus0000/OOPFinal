#pragma once
#include "GameObject.h"
#include <memory>
#include <string>

class GameObjectFactory {
public:
    // 給定一個類型名稱，回傳對應的物件
    static std::shared_ptr<GameObject> createGameObject(const std::string& type, float x, float y);
};