#pragma once

#include <SFML/Graphics.hpp>
#include "ResourceManager.h"
#include "RenderManager.h"

class Scene
{
public:
	virtual ~Scene() = default;

	virtual void Update(float deltaTime) = 0;
	virtual void Draw(RenderManager& renderManager, sf::RenderWindow& window, const ResourceManager& resourceManager) = 0;
};