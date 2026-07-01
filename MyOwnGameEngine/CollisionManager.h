#pragma once

#include "GameObject.h"

class CollisionManager
{
public:
	static bool CheckCollision(const GameObject& a, const GameObject& b);
};