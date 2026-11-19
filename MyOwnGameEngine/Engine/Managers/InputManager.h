#pragma once

#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Mouse.hpp>

class InputManager
{
public:
	static bool IsKeyPressed(sf::Keyboard::Key key);
	static bool IsMaousePressed(sf::Mouse::Button button);
};