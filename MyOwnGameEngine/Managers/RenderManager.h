#pragma once

#include <SFML/Graphics.hpp>
#include "../GameObjects/GameObject.h"

class RenderManager
{
public:
	void Draw(const GameObject& object, sf::RenderWindow& window);
};