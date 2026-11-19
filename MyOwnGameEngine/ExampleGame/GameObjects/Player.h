#pragma once

#include "../../Engine/Core/GameObject.h"

class Player : public GameObject
{
public:
	Player();

	void Update(float deltaTime) override;

private:
	float movementSpeed;
};