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

	SetPosition(GetPosition() + movement);
}

void Player::UndoMove()
{
	SetPosition(previousPosition);
}
