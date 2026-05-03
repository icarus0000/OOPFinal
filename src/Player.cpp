#include "Player.h"
#include "raylib.h"

Player::Player(float startX, float startY) 
    : GameObject(startX, startY, 50.0f, 50.0f, "Player") {
    speed = 5.0f; 
}

void Player::Update() {
    // 1. 處理玩家移動
    if (IsKeyDown(KEY_W)) y -= speed;
    if (IsKeyDown(KEY_S)) y += speed;
    if (IsKeyDown(KEY_A)) x -= speed;
    if (IsKeyDown(KEY_D)) x += speed;

    // 2. 處理邊界碰撞 (不讓玩家跑出視窗)
    
    // 左邊界：如果 x 小於 0，就把他強制拉回 0
    if (x < 0) {
        x = 0;
    }
    
    // 上邊界：如果 y 小於 0，就把他強制拉回 0
    if (y < 0) {
        y = 0;
    }
    
    // 右邊界：如果「x + 角色寬度」大於視窗寬度，就把 x 設為「視窗寬度 - 角色寬度」
    if (x + width > GetScreenWidth()) {
        x = GetScreenWidth() - width;
    }
    
    // 下邊界：如果「y + 角色高度」大於視窗高度，就把 y 設為「視窗高度 - 角色高度」
    if (y + height > GetScreenHeight()) {
        y = GetScreenHeight() - height;
    }
}
void Player::Draw() {
    // 玩家自己知道自己要畫成藍色方塊
    DrawRectangle(x, y, width, height, BLUE);
}