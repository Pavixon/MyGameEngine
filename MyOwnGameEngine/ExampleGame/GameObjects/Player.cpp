#include "Player.h"
#include "Enemy.h"
#include "../../Engine/Managers/InputManager.h"
#include <cmath>

Player::Player()
	:movementSpeed(200.f),
	 attackTimer(0.f),
	 attackRate(1.f),
	 attackDamage(1),
	 attackVisualTimer(0.f),
	 attackVisualDuration(0.2f)
{
	SetPosition(sf::Vector2f(100.f, 100.f));
	SetSize(sf::Vector2f(32.f, 32.f));
	SetTextureName("player");
}

void Player::SetTargetEnemies(const std::vector<Enemy*>& enemies)
{
	targetEnemies = enemies;
}

bool Player::IsAttacking() const
{
	return attackVisualTimer > 0.f;
}

void Player::Update(float deltaTime)
{
	if (attackVisualTimer > 0.f)
	{
		attackVisualTimer -= deltaTime;

		if (attackVisualTimer < 0.f)
		{
			attackVisualTimer = 0.f;
		}
	}

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

	if (targetEnemies.empty())
	{
		return;
	}

	attackTimer += deltaTime;

	if (attackTimer >= attackRate)
	{
		attackTimer -= attackRate;

		for (Enemy* enemy : targetEnemies)
		{
			if (enemy != nullptr && enemy->IsActive())
			{
				enemy->TakeDamage(attackDamage);
			}
		}
		attackVisualTimer = attackVisualDuration;
	}
}

