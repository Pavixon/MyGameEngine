#pragma once

#include <SFML/Graphics.hpp>

class GameObject
{
public:
	GameObject();
	virtual ~GameObject() = default;
	
	virtual void Update(float deltaTime) = 0;

	void SetPosition(const sf::Vector2f& position);
	sf::Vector2f GetPosition() const;

	void SetSize(const sf::Vector2f& size);
	sf::Vector2f GetSize() const;

	sf::FloatRect GetBounds() const;

	sf::Color GetColor() const;

	void SetActive(bool active);
	bool IsActive() const;

protected:
	sf::Vector2f position;
	sf::Vector2f size;
	sf::Color color;
	bool active;
};