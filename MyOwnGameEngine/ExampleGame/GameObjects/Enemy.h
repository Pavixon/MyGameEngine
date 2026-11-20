#pragma once

#include "../../Engine/Core/GameObject.h"
#include "Player.h"

class Enemy : public GameObject
{
public:
	Enemy(Player& target, const sf::Vector2f& position);
	
	void Update(float deltaTime) override;

private:
	Player& target;
	float movementSpeed;
};