#include "Player.h"

Player::Player()
	:movementSpeed(200.f)
{
	SetPosition(sf::Vector2f(100.f, 100.f));
	SetSize(sf::Vector2f(32.f, 32.f));
	SetTextureName("player");
}

void Player::Update(float deltaTime)
{

}