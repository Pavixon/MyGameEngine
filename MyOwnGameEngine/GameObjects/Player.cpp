#include "Player.h"
#include "InputManager.h"

Player::Player()
	: speed(200.f),
	  previousPosition(0.f, 0.f)
{
	shape.setSize(sf::Vector2f(50.f, 50.f));
	shape.setFillColor(sf::Color::Green);
	shape.setPosition(sf::Vector2f(100.f, 100.f));
}

void Player::Update(float deltaTime)
{
	previousPosition = shape.getPosition();

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

void Player::UndoMove()
{
	shape.setPosition(previousPosition);
}
