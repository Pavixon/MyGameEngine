#include "CollisionManager.h"

bool CollisionManager::CheckCollision(const GameObject& a, const GameObject& b)
{
	return a.GetBounds().findIntersection(b.GetBounds()).has_value();
}

void CollisionManager::ResolveMovement(GameObject& object, const sf::Vector2f& previousPosition, const std::vector<std::shared_ptr<GameObject>>& objects)
{
	sf::Vector2f currentPosition = object.GetPosition();
	object.SetPosition(sf::Vector2f(currentPosition.x, previousPosition.y));

	for (const auto& other : objects)
	{
		if (other.get() == &object || !other->IsActive() || !other->BlockMovement()) continue;

		if (CheckCollision(object, *other))
		{
			object.SetPosition(sf::Vector2f(previousPosition.x, previousPosition.y));
			break;
		}
	}

	object.SetPosition(sf::Vector2f(object.GetPosition().x, currentPosition.y));

	for (const auto& other : objects)
	{
		if (other.get() == &object || !other->IsActive() || !other->BlockMovement())
			continue;

		if (CheckCollision(object, *other))
		{
			object.SetPosition(sf::Vector2f(object.GetPosition().x, previousPosition.y));
			break;
		}
	}
}