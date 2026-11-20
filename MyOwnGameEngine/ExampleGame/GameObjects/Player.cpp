#include "Player.h"
#include "../../Engine/Managers/InputManager.h"
#include <cmath>

Player::Player()
	:movementSpeed(200.f)
{
	SetPosition(sf::Vector2f(100.f, 100.f));
	SetSize(sf::Vector2f(32.f, 32.f));
	SetTextureName("player");
}

void Player::Update(float deltaTime)
{
	sf::Vector2f movement(0.f, 0.f);

	if (InputManager::IsKeyPressed(sf::Keyboard::Key::W))
	{
		movement.y -= 1.f;
	}
	if (InputManager::IsKeyPressed(sf::Keyboard::Key::S))
	{
		movement.y += 1.f;
	}
	if (InputManager::IsKeyPressed(sf::Keyboard::Key::A))
	{
		movement.x -= 1.f;
	}
	if (InputManager::IsKeyPressed(sf::Keyboard::Key::D))
	{
		movement.x += 1.f;
	}

	if (movement.x != 0.f || movement.y != 0.f)
	{
		movement /= std::sqrt(movement.x * movement.x + movement.y * movement.y);
	}

	position += movement * movementSpeed * deltaTime;
}