#pragma once
#include "Engine\GameObject.h"
class GameOver :
    public GameObject
{
public:
    GameOver(GameObject* parent);
    void Initialize() override;
    void Update() override;
    void Draw() override;
    void Release() override;
private:
    int hGameOverPic_;
    
};

