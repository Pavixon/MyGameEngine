#include "RenderManager.h"

void RenderManager::Draw(const GameObject& object, sf::RenderWindow& window)
{
	if (!object.IsActive())
		return;

	sf::RectangleShape shape;
	shape.setPosition(object.GetPosition());
	shape.setSize(object.GetSize());
	shape.setFillColor(object.GetColor());

	window.draw(shape);
}