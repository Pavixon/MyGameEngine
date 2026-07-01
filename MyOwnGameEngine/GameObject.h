#pragma once

#include <SFML/Graphics.hpp>

class GameObject
{
public:
	GameObject();
	virtual ~GameObject() = default;
	
	virtual void Update(float deltaTime) = 0;
	virtual void Draw(sf::RenderWindow& window);

	void SetPosition(const sf::Vector2f& position);
	sf::Vector2f GetPosition() const;

	void SetSize(const sf::Vector2f& size);
	sf::Vector2f GetSize() const;

	void SetActive(bool active);
	bool IsActive() const;

protected:
	sf::RectangleShape shape;
	bool active;
};