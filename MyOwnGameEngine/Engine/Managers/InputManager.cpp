#include "InputManager.h"
#include <SFML/Window/Keyboard.hpp>

bool InputManager::IsActionPressed(InputAction action)
{
	switch (action)
	{
	case InputAction::MoveUp:
		return sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W);
	case InputAction::MoveDown:
		return sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S);
	case InputAction::MoveLeft:
		return sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A);
	case InputAction::MoveRight:
		return sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D);
	default:
		return false;
	}
}
