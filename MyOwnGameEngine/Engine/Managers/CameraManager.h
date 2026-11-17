#pragma once

#include <SFML/Graphics.hpp>

class CameraManager
{
public:
	CameraManager(const sf::Vector2f& size);
	
	void Follow(const sf::Vector2f& targetPosition);
	void Apply(sf::RenderWindow& window);

private:
	sf::View view;
};