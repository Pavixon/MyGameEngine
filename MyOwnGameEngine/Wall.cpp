#include "Wall.h"

Wall::Wall(const sf::Vector2f position, const sf::Vector2f& size)
{
	shape.setPosition(position);
	shape.setSize(size);
	shape.setFillColor(sf::Color::Blue);
}

void Wall::Update(float deltaTime)
{
	//Wall is static so it does nothing
}
