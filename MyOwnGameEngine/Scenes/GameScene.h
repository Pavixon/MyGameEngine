#pragma once

#include "Scene.h"
#include "GameObjectManager.h"
#include "Player.h"
#include "Enemy.h"
#include "Wall.h"
#include "CameraManager.h"
#include <memory>
#include <vector>

class GameScene : public Scene
{
public:
	GameScene();

	void Update(float deltaTime) override;
	void Draw(sf::RenderWindow& window) override;

private:
	GameObjectManager objectManager;
	CameraManager cameraManager;

	std::shared_ptr<Player> player;
	std::shared_ptr<Enemy> enemy;
	std::vector<std::shared_ptr<Wall>> walls;
};