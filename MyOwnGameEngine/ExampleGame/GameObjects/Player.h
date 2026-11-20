#pragma once

#include "../../Engine/Core/GameObject.h"
#include <vector>

class Enemy;

class Player : public GameObject
{
public:
	Player();

	void Update(float deltaTime) override;

	void SetTargetEnemies(const std::vector<Enemy*>& enemies);
	bool IsAttacking() const;

private:
	float movementSpeed;
	std::vector<Enemy*> targetEnemies;
	float attackTimer;
	float attackRate;
	int attackDamage;
	float attackVisualTimer;
	float attackVisualDuration;
};