#include "SampleScene.h"
#include "../GameObjects/Wall.h"

SampleScene::SampleScene()
	: cameraManager(sf::Vector2f(1280.f, 720.f)),
	  spawnTimer(0.f),
	  spawnRate(3.f),
	  nextSpawnPosition(0)
{
	player = std::make_shared<Player>();
	auto enemy = std::make_shared<Enemy>(*player, sf::Vector2f(700.f, 300.f));
	gameObjectManager.AddObject(player);
	enemies.push_back(enemy);
	gameObjectManager.AddObject(enemy);
	gameObjectManager.AddObject(std::make_shared<Wall>(sf::Vector2f(300.f, 200.f), sf::Vector2f(200.f, 50.f)));
	gameObjectManager.AddObject(std::make_shared<Wall>(sf::Vector2f(500.f, 400.f), sf::Vector2f(50.f, 200.f)));
	gameObjectManager.AddObject(std::make_shared<Wall>(sf::Vector2f(700.f, 150.f), sf::Vector2f(200.f, 50.f)));
}

void SampleScene::Update(float deltaTime)
{
	spawnTimer += deltaTime;

	if (spawnTimer >= spawnRate)
	{
		const sf::Vector2f spawnPositions[] = {sf::Vector2f(1100.f, 600.f), sf::Vector2f(1100.f, 100.f), sf::Vector2f(100.f, 600.f), sf::Vector2f(1200.f, 350.f)};
		auto enemy = std::make_shared<Enemy>(*player, spawnPositions[nextSpawnPosition]);
		enemies.push_back(enemy);
		gameObjectManager.AddObject(enemy);
		nextSpawnPosition = (nextSpawnPosition + 1) % 4;
		spawnTimer -= spawnRate;
	}

	gameObjectManager.Update(deltaTime);
}

void SampleScene::Draw(RenderManager& renderManager, sf::RenderWindow& window, const ResourceManager& resourceManager)
{
	cameraManager.Apply(window);
	gameObjectManager.Draw(renderManager, window, resourceManager);
}