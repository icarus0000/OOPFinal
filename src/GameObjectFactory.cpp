#include "GameObjectFactory.h"
#include "Player.h"

std::shared_ptr<GameObject> GameObjectFactory::createGameObject(const std::string& type, float x, float y) {
    if (type == "Player") {
        return std::make_shared<Player>(x, y);
    }
    // 未來如果作業要求新增敵人，可以在這裡擴充: 
    // else if (type == "Enemy") { return std::make_shared<Enemy>(x, y); }
    
    return nullptr;
}