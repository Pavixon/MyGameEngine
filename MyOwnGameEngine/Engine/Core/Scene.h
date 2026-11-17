#pragma once

#include <SFML/Graphics.hpp>
#include "../Managers/ResourceManager.h"
#include "../Managers/RenderManager.h"

class Scene
{
public:
	virtual ~Scene() = default;

	virtual void Update(float deltaTime) = 0;
	virtual void Draw(RenderManager& renderManager, sf::RenderWindow& window, const ResourceManager& resourceManager) = 0;
};