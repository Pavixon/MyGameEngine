#pragma once

#include "GameObject.h"

class Player : public GameObject
{
public:
	Player();

	void Update(float deltaTime) override;
	void UndoMove();

private:
	float speed;
	sf::Vector2f previousPosition;
};