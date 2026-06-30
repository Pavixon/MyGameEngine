#include "GameObjectManager.h"

void GameObjectManager::AddObject(std::shared_ptr<GameObject> object)
{
	objects.push_back(object);
}

void GameObjectManager::Update(float deltaTime)
{
	for (auto& object : objects)
	{
		object->Update(deltaTime);
	}
}

void GameObjectManager::Draw(sf::RenderWindow& window)
{
	for (auto& object : objects)
	{
		object->Draw(window);
	}
}
