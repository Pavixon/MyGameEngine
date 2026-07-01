#include "BasicObject.h"
#include "InputManager.h"

BasicObject::BasicObject()
{
	shape.setFillColor(sf::Color::White);
}

void BasicObject::Update(float deltaTime)
{
	float speed = 200.f;

	sf::Vector2f movement(0.f, 0.f);

	if (InputManager::IsKeyPressed(sf::Keyboard::Key::W))
	{
		movement.y -= speed * deltaTime;
	}
	if (InputManager::IsKeyPressed(sf::Keyboard::Key::S))
	{
		movement.y += speed * deltaTime;
	}
	if (InputManager::IsKeyPressed(sf::Keyboard::Key::A))
	{
		movement.x -= speed * deltaTime;
	}
	if (InputManager::IsKeyPressed(sf::Keyboard::Key::D))
	{
		movement.x += speed * deltaTime;
	}

	shape.move(movement);
}
