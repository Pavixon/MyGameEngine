#include "Wall.h"

Wall::Wall(const sf::Vector2f position, const sf::Vector2f& size)
{
	SetPosition(position);
	SetSize(size);
	color = sf::Color::Blue;
}

void Wall::Update(float deltaTime)
{
	//Wall is static so it does nothing
}
