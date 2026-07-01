#include "InputManager.h"

bool InputManager::IsKeyPressed(sf::Keyboard::Key key)
{
	return sf::Keyboard::isKeyPressed(key);
}
