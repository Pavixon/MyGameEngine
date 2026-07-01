#include "Enemy.h"

Enemy::Enemy(const sf::Vector2f& position)
{
	shape.setSize(sf::Vector2f(50.f, 50.f));
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(position);
}

void Enemy::Update(float deltaTime)
{
	//For now do nothing
}
