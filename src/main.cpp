#include "raylib.h"
#include <iostream>
#include <vector>
#include "GameObjectFactory.h"
#include "GameObject.h"

int main() {
    InitWindow(800, 450, "Raylib OOP");
    SetTargetFPS(60);

    // 建立一個容器來儲存所有遊戲物件
    std::vector<std::shared_ptr<GameObject>> gameObjects;
    
    // 使用 Factory 生成玩家，並放入容器中
    gameObjects.push_back(GameObjectFactory::createGameObject("Player", 400, 225));

    while (!WindowShouldClose()) {
        // 1. 資料邏輯處理
        for (auto& obj : gameObjects) {
            obj->Update(); // 處理移動、座標更新等
        }

        // 2. 畫面渲染處理
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // 根據物件類型決定要怎麼畫
        for (auto& obj : gameObjects) {
            obj->Draw(); 
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
