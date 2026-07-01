#pragma once

#include "GameObject.h"
#include <memory>

class Enemy : public GameObject
{
public:
	Enemy(const sf::Vector2f& position);

	void Update(float deltaTime) override;
	void SetTarget(std::shared_ptr<GameObject> target);

private:
	float speed;
	std::shared_ptr<GameObject> target;
};