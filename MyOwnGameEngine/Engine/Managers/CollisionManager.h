#pragma once

#include "../Core/GameObject.h"
#include <memory>
#include <vector>

class CollisionManager
{
public:
	static bool CheckCollision(const GameObject& a, const GameObject& b);
	static void ResolveMovement(GameObject& object, const sf::Vector2f& previousPosition, const std::vector<std::shared_ptr<GameObject>>& objects);
};