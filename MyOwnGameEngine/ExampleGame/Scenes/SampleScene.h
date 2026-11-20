#pragma once

#include "../../Engine/Core/Scene.h"
#include "../../Engine/Managers/GameObjectManager.h"
#include "../../Engine/Managers/CameraManager.h"
#include "../GameObjects/Player.h"

class SampleScene : public Scene
{
public:
	SampleScene();

	void Update(float deltaTime) override;
	
	void Draw(RenderManager& renderManager, sf::RenderWindow& window, const ResourceManager& resourceManager) override;

private:
	std::shared_ptr<Player> player;
	GameObjectManager gameObjectManager;
	CameraManager cameraManager;
};