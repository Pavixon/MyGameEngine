#include "Player.h"
#include "InputManager.h"

Player::Player()
	: speed(200.f),
	  previousPosition(0.f, 0.f)
{
	SetSize(sf::Vector2f(50.f, 50.f));
	SetPosition(sf::Vector2f(100.f, 100.f));
	color = sf::Color::Green;
}

void Player::Update(float deltaTime)
{
	previousPosition = GetPosition();

	sf::Vector2f movement(0.f, 0.f);

	if (InputManager::IsActionPressed(InputAction::MoveUp))
	{
		movement.y -= speed * deltaTime;
	}
	if (InputManager::IsActionPressed(InputAction::MoveDown))
	{
		movement.y += speed * deltaTime;
	}
	if (InputManager::IsActionPressed(InputAction::MoveLeft))
	{
		movement.x -= speed * deltaTime;
	}
	if (InputManager::IsActionPressed(InputAction::MoveRight))
	{
		movement.x += speed * deltaTime;
	}

	SetPosition(GetPosition() + movement);
}

void Player::UndoMove()
{
	SetPosition(previousPosition);
}
