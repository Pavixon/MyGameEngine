#pragma once

#include <vector>
#include <memory>
#include "../Core/GameObject.h"
#include "RenderManager.h"
#include "ResourceManager.h"

class GameObjectManager
{
public:
	void AddObject(std::shared_ptr<GameObject> object);

	void Update(float deltaTime);
	void Draw(RenderManager& renderManager, sf::RenderWindow& window, const ResourceManager& resourceManager);

private:
	std::vector<std::shared_ptr<GameObject>> objects;
};