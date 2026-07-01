#include "GameScene.h"
#include "CollisionManager.h"

GameScene::GameScene()
	:cameraManager(sf::Vector2f(1280.f, 720.f))
{
	player = std::make_shared<Player>();
	objectManager.AddObject(player);

	enemy = std::make_shared<Enemy>(sf::Vector2f(700.f, 300.f));
	enemy->SetTarget(player);
	objectManager.AddObject(enemy);

	walls.push_back(std::make_shared<Wall>(
		sf::Vector2f(300.f, 200.f),
		sf::Vector2f(200.f, 50.f)
	));

	walls.push_back(std::make_shared<Wall>(
		sf::Vector2f(500.f, 400.f),
		sf::Vector2f(50.f, 200.f)
	));

	for (auto& wall : walls)
	{
		objectManager.AddObject(wall);
	}
}

void GameScene::Update(float deltaTime)
{
	objectManager.Update(deltaTime);

	for (auto& wall : walls)
	{
		if (CollisionManager::CheckCollision(*player, *wall))
		{
			player->UndoMove();
			break;
		}
	}

	cameraManager.Follow(player->GetPosition());
}

void GameScene::Draw(sf::RenderWindow& window)
{
	cameraManager.Apply(window);
	objectManager.Draw(window);
}
