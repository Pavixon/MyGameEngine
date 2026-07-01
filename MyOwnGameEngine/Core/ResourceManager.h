#pragma once

#include <SFML/Graphics.hpp>
#include <map>
#include <string>

class ResourceManager
{
public:
	bool LoadTexture(const std::string& name, const std::string& filePath);
	const sf::Texture& GetTexture(const std::string& name) const;

private:
	std::map<std::string, sf::Texture> textures;
};