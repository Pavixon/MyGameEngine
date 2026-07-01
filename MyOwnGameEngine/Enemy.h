#pragma once

#include "GameObject.h"

class Enemy : public GameObject
{
public:
	Enemy(const sf::Vector2f& position);

	void Update(float deltaTime) override;
};