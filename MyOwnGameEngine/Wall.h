#pragma once

#include "GameObject.h"

class Wall : public GameObject
{
public:
	Wall(const sf::Vector2f position, const sf::Vector2f& size);

	void Update(float deltaTime) override;
};