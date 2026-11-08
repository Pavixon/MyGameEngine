#pragma once

#include <SFML/Graphics.hpp>

class RenderManager;

class Scene
{
public:
	virtual ~Scene() = default;

	virtual void Update(float deltaTime) = 0;
	virtual void Draw(RenderManager& renderManager, sf::RenderWindow& window) = 0;
};