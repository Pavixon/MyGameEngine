#pragma once

#include <SFML/Window/Keyboard.hpp>

class InputManager
{
public:
	static bool IsKeyPressed(sf::Keyboard::Key key);
};