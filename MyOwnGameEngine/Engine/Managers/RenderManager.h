#pragma once

#include <SFML/Graphics.hpp>
#include "../Core/GameObject.h"
#include "ResourceManager.h"

class RenderManager
{
public:
	void Draw(const GameObject& object, sf::RenderWindow& window, const ResourceManager& resourceManager);
};