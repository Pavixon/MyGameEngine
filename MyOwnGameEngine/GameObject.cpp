#include "GameObject.h"

GameObject::GameObject()
	:active(true)
{
	shape.setSize(sf::Vector2f(50.f, 50.f));
	shape.setFillColor(sf::Color::White);
	shape.setPosition(sf::Vector2f(0.f, 0.f));
}

void GameObject::Draw(sf::RenderWindow& window)
{
	if (active)
	{
		window.draw(shape);
	}
}

void GameObject::SetPosition(const sf::Vector2f& position)
{
	shape.setPosition(position);
}

sf::Vector2f GameObject::GetPosition() const
{
	return shape.getPosition();
}

void GameObject::SetSize(const sf::Vector2f& size)
{
	shape.setSize(size);
}

sf::Vector2f GameObject::GetSize() const
{
	return shape.getSize();
}

void GameObject::SetActive(bool active)
{
	this->active = active;
}

bool GameObject::IsActive() const
{
	return active;
}
