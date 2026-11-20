#include "SampleScene.h"
#include "../GameObjects/Player.h"
#include "../GameObjects/Wall.h"

SampleScene::SampleScene()
	: cameraManager(sf::Vector2f(1280.f, 720.f))
{
	gameObjectManager.AddObject(std::make_shared<Player>());
	gameObjectManager.AddObject(std::make_shared<Wall>(sf::Vector2f(300.f, 200.f), sf::Vector2f(200.f, 50.f)));
	gameObjectManager.AddObject(std::make_shared<Wall>(sf::Vector2f(500.f, 400.f), sf::Vector2f(50.f, 200.f)));
	gameObjectManager.AddObject(std::make_shared<Wall>(sf::Vector2f(700.f, 150.f), sf::Vector2f(250.f, 50.f)));
}

void SampleScene::Update(float deltaTime)
{
	gameObjectManager.Update(deltaTime);
}

void SampleScene::Draw(RenderManager& renderManager, sf::RenderWindow& window, const ResourceManager& resourceManager)
{
	cameraManager.Apply(window);
	gameObjectManager.Draw(renderManager, window, resourceManager);
}