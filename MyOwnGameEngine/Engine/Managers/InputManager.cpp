#include "InputManager.h"

bool InputManager::IsKeyPressed(sf::Keyboard::Key key)
{
	return sf::Keyboard::isKeyPressed(key);
}

bool InputManager::IsMousePressed(sf::Mouse::Button button)
{
	return sf::Mouse::isButtonPressed(button);
}
