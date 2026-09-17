#include "GameOver.h"
#include "Engine/Image.h"
#include "Engine/Input.h"
#include "Engine/SceneManager.h"

GameOver::GameOver(GameObject* parent)
	:GameObject(parent, "GameOver"), hGameOverPic_(-1)
{
}

void GameOver::Initialize()
{
	hGameOverPic_ = Image::Load("GameOver.png");
	assert(hGameOverPic_ >= 0);
}

void GameOver::Update()
{
	if (Input::IsKeyDown(DIK_SPACE))
	{
		SceneManager* pSceneManager = (SceneManager*)(this->GetParent());
		pSceneManager->ChangeScene(SCENE_ID_TITLE);
	}
}

void GameOver::Draw()
{
	transform_.scale_ = { 1.0f, 1.0f, 1.0f };
	Image::SetTransform(hGameOverPic_, transform_);
	Image::Draw(hGameOverPic_);
}

void GameOver::Release()
{
}
