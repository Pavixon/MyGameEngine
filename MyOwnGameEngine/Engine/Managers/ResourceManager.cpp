#include "ResourceManager.h"
#include <iostream>

bool ResourceManager::HasTexture(const std::string& name) const
{
	return textures.find(name) != textures.end();
}

bool ResourceManager::LoadTexture(const std::string& name, const std::string& filePath)
{
	sf::Texture texture;

	if (!texture.loadFromFile(filePath))
	{
		std::cout << "No Texture" << filePath << std::endl;
		return false;
	}
	textures[name] = std::move(texture);
	return true;
}

const sf::Texture& ResourceManager::GetTexture(const std::string& name) const
{
	return textures.at(name);
}
