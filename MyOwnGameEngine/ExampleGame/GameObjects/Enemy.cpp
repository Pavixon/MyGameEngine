#include "Enemy.h"
#include <cmath>

Enemy::Enemy(Player& target, const sf::Vector2f& position)
	: target(target),
	  movementSpeed(100.f),
	  health(3)
{
	SetPosition(position);
	SetSize(sf::Vector2f(32.f, 32.f));
	SetTextureName("enemy");
}

void Enemy::Update(float deltaTime)
{
	sf::Vector2f direction = target.GetPosition() - position;
	float length = std::sqrt(direction.x * direction.x + direction.y * direction.y);

	if (length > 0.f)
	{
		direction /= length;
		position += direction * movementSpeed * deltaTime;
	}
}

void Enemy::TakeDamage(int damage)
{
	health -= damage;
	if (health <= 0)
	{
		SetActive(false);
	}
}