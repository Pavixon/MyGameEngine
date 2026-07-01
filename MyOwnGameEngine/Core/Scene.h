#pragma once

#include <SFML/Graphics.hpp>

class Scene
{
public:
	virtual ~Scene() = default;

	virtual void Update(float deltaTime) = 0;
	virtual void Draw(sf::RenderWindow& window) = 0;
};