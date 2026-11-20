#pragma once

#include <SFML/Graphics.hpp>
#include <string>

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

	void SetTextureName(const std::string& name);
	const std::string& GetTextureName() const;

	void SetActive(bool active);
	bool IsActive() const;

	void SetBlockMovement(bool blocks);
	bool BlockMovement() const;

protected:
	sf::Vector2f position;
	sf::Vector2f size;
	sf::Color color;
	std::string textureName;
	bool active;
	bool blocksMovement;
};