#include "CameraManager.h"

CameraManager::CameraManager(const sf::Vector2f& size)
	: view(sf::FloatRect({0.f, 0.f}, size))
{

}

void CameraManager::Follow(const sf::Vector2f& targetPosition)
{
	view.setCenter(targetPosition);
}

void CameraManager::Apply(sf::RenderWindow& window)
{
	window.setView(view);
}
