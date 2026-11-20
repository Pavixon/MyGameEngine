#include "SampleScene.h"

SampleScene::SampleScene()
	: cameraManager(sf::Vector2f(1280.f, 720.f))
{
	gameObjectManager.AddObject(std::make_shared<Player>());
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