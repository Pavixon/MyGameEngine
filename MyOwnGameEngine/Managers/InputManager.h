#pragma once

enum class InputAction
{
	MoveUp,
	MoveDown,
	MoveLeft,
	MoveRight
};

class InputManager
{
public:
	static bool IsActionPressed(InputAction action);
};