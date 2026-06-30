#pragma once

#include <SFML/Graphics.hpp>

class GameObject
{
public:
	GameObject();
	virtual ~GameObject() = default;
	
	virtual void Update(float deltaTime);
	virtual void Draw(sf::RenderWindow& window);

	void SetPosition(float x, float y);
	sf::Vector2f GetPosition() const;

protected:
	sf::RectangleShape shape;
	
};