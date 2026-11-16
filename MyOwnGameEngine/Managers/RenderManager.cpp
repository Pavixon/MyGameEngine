#include "RenderManager.h"

void RenderManager::Draw(const GameObject& object, sf::RenderWindow& window, const ResourceManager& resourceManager)
{
	if (!object.IsActive())
		return;

	const std::string& textureName = object.GetTextureName();

	if (!textureName.empty() && resourceManager.HasTexture(textureName))
	{
		const sf::Texture& texture = resourceManager.GetTexture(textureName);
		sf::Sprite sprite(texture);
		sprite.setPosition(object.GetPosition());
		sf::Vector2u textureSize = texture.getSize();
		sf::Vector2f objectSize = object.GetSize();
		sprite.setScale(sf::Vector2f(
			objectSize.x / textureSize.x,
			objectSize.y / textureSize.y
		));
		window.draw(sprite);
	}
	else
	{
		sf::RectangleShape shape;
		shape.setPosition(object.GetPosition());
		shape.setSize(object.GetSize());
		shape.setFillColor(object.GetColor());

		window.draw(shape);
	}
}