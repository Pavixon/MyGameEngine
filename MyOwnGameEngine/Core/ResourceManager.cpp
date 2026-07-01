#include "ResourceManager.h"
#include <iostream>

bool ResourceManager::LoadTexture(const std::string& name, const std::string& filePath)
{
	sf::Texture texture;

	if (!texture.loadFromFile(filePath))
	{
		std::cout << "Nie udalo sie zaladowac tekstury" << filePath << std::endl;
		return false;
	}
	textures[name] = std::move(texture);
	return true;
}

const sf::Texture& ResourceManager::GetTexture(const std::string& name) const
{
	return textures.at(name);
}
