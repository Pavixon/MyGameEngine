#include "CollisionManager.h"

bool CollisionManager::CheckCollision(const GameObject& a, const GameObject& b)
{
	return a.GetBounds().findIntersection(b.GetBounds()).has_value();
}
