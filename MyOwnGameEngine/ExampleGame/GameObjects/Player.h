#pragma once

#include "../../Engine/Core/GameObject.h"

class Enemy;

class Player : public GameObject
{
public:
	Player();

	void Update(float deltaTime) override;

	void SetTargetEnemy(Enemy* enemy);

private:
	float movementSpeed;
	Enemy* targetEnemy;
	float attackTimer;
	float attackRate;
	int attackDamage;
};