#pragma once

#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Mouse.hpp>

class InputManager
{
public:
	static bool IsKeyPressed(sf::Keyboard::Key key);
	static bool IsMousePressed(sf::Mouse::Button button);
};