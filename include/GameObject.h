#pragma once
#include <string>

class GameObject {
protected:
    float x, y;       // 座標
    float width, height; // 大小
    std::string type; // 物件類型 (例如 "Player", "Enemy")

public:
    GameObject(float startX, float startY, float w, float h, std::string t);
    virtual ~GameObject() = default;

    // 更新物件的資料 (例如移動、狀態改變)
    virtual void Update() = 0; // 純虛擬函式，強迫子類別實作
    virtual void Draw() = 0; //純虛擬函式，繪畫函數
    // Getter，如果外部需要獲取座標
    float GetX() const;
    float GetY() const;
    float GetWidth() const;
    float GetHeight() const;
    std::string GetType() const;
};