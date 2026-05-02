classDiagram
    class GameObject {
        #float x
        #float y
        #float width
        #float height
        #string type
        +GameObject(startX, startY, w, h, t)
        +Update() void
        +GetX() float
        +GetY() float
        +GetWidth() float
        +GetHeight() float
        +GetType() string
    }
    
    class Player {
        -float speed
        +Player(startX, startY)
        +Update() void
    }
    
    class GameObjectFactory {
        +createGameObject(type: string, x: float, y: float)$ shared_ptr~GameObject~
    }
    
    GameObject <|-- Player : 繼承 (Inheritance)
    GameObjectFactory ..> GameObject : 依賴/生成
    GameObjectFactory ..> Player : 依賴/生成
