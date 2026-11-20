#include "Wall.h"

Wall::Wall(const sf::Vector2f& position, const sf::Vector2f& size)
{
	SetPosition(position);
	SetSize(size);
	color = sf::Color(100, 100, 100);
}

void Wall::Update(float deltaTime)
{

}