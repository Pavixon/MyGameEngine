#pragma once

#include <vector>
#include <memory>
#include <SFML/Graphics.hpp>
#include "GameObject.h"
#include "RenderManager.h"

class GameObjectManager
{
public:
	void AddObject(std::shared_ptr<GameObject> object);

	void Update(float deltaTime);
	void Draw(RenderManager& renderManager, sf::RenderWindow& window);

private:
	std::vector<std::shared_ptr<GameObject>> objects;
};