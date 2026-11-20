#include "GameObjectManager.h"
#include "CollisionManager.h"


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
			sf::Vector2f previousPosition = object->GetPosition();
			object->Update(deltaTime);
			CollisionManager::ResolveMovement(*object, previousPosition, objects);
		}
	}
}

void GameObjectManager::Draw(RenderManager& renderManager, sf::RenderWindow& window, const ResourceManager& resourceManager)
{
	for (auto& object : objects)
	{
		if (object->IsActive())
		{
			renderManager.Draw(*object, window, resourceManager);
		}
	}
}
