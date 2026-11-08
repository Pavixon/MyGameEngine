#include "GameObject.h"

GameObject::GameObject()
	: position(0.f, 0.f),
	  size(50.f, 50.f),
	  color(sf::Color::White),
	  active(true)
{
}

void GameObject::SetPosition(const sf::Vector2f& position)
{
	this->position = position;
}

sf::Vector2f GameObject::GetPosition() const
{
	return position;
}

void GameObject::SetSize(const sf::Vector2f& size)
{
	this->size = size;
}

sf::Vector2f GameObject::GetSize() const
{
	return size;
}

sf::FloatRect GameObject::GetBounds() const
{
	return sf::FloatRect(position, size);
}

sf::Color GameObject::GetColor() const
{
	return color;
}

void GameObject::SetActive(bool active)
{
	this->active = active;
}

bool GameObject::IsActive() const
{
	return active;
}
