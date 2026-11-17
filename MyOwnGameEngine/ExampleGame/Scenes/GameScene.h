#pragma once

#include "../../Engine/Core/Scene.h"
#include "../../Engine/Managers/GameObjectManager.h"
#include "../GameObjects/Player.h"
#include "../GameObjects/Enemy.h"
#include "../GameObjects/Wall.h"
#include "../../Engine/Managers/CameraManager.h"
#include <memory>
#include <vector>


class GameScene : public Scene
{
public:
	GameScene();

	void Update(float deltaTime) override;
	void Draw(RenderManager& renderManager, sf::RenderWindow& window, const ResourceManager& resourceManager) override;

private:
	GameObjectManager objectManager;
	CameraManager cameraManager;

	std::shared_ptr<Player> player;
	std::shared_ptr<Enemy> enemy;
	std::vector<std::shared_ptr<Wall>> walls;
};