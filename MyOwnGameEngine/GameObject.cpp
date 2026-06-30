#include "GameObject.h"

GameObject::GameObject()
{
	shape.setSize(sf::Vector2(50.f, 50.f));
	shape.setFillColor(sf::Color::White);
	shape.setPosition(sf::Vector2(100.f, 100.f));
}

void GameObject::Update(float deltaTime)
{
	//object by default do nothing
}

void GameObject::Draw(sf::RenderWindow& window)
{
	window.draw(shape);
}

void GameObject::SetPosition(float x, float y)
{
	shape.setPosition(sf::Vector2(x, y));
}

sf::Vector2f GameObject::GetPosition() const
{
	return shape.getPosition();
}
