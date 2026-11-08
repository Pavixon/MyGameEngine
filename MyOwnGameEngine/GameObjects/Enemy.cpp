#include "Enemy.h"
#include <cmath>

Enemy::Enemy(const sf::Vector2f& position)
	: speed(100.f),
	  target(nullptr)
{
	SetSize(sf::Vector2f(50.f, 50.f));
	SetPosition(position);
	color = sf::Color::Red;
}

void Enemy::Update(float deltaTime)
{
	if (target == nullptr) return;

	sf::Vector2f enemyPosition = GetPosition();
	sf::Vector2f targetPosition = target->GetPosition();

	sf::Vector2f direction = targetPosition - enemyPosition;

	//Length between enemy and target
	float length = std::sqrt(direction.x * direction.x + direction.y * direction.y);

	if (length != 0.f)
	{
		direction.x /= length;
		direction.y /= length;
	}

	SetPosition(GetPosition() + direction * speed * deltaTime);
}

void Enemy::SetTarget(std::shared_ptr<GameObject> target)
{
	this->target = target;
}
