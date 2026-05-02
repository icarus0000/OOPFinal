#include "GameObject.h"

GameObject::GameObject(float startX, float startY, float w, float h, std::string t) 
    : x(startX), y(startY), width(w), height(h), type(t) {
}

float GameObject::GetX() const {
    return x;
}

float GameObject::GetY() const {
    return y;
}

float GameObject::GetWidth() const {
    return width;
}

float GameObject::GetHeight() const {
    return height;
}

std::string GameObject::GetType() const {
    return type;
}