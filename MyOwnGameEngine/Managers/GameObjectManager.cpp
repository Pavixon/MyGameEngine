#include "GameObjectManager.h"

class ResourceManager;

void GameObjectManager::AddObject(std::shared_ptr<GameObject> object)
{
	objects.push_back(object);
}

void GameObjectManager::Update(float deltaTime)
{
	for (auto& object : objects)
	{
		if (object->IsActive())
		{
			object->Update(deltaTime);
		}
	}
}

void GameObjectManager::Draw(RenderManager& renderManager, sf::RenderWindow& window, const ResourceManager& resourceManager)
{
	for (auto& object : objects)
	{
		renderManager.Draw(*object, window, resourceManager);
	}
}
