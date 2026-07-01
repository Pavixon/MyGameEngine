#pragma once

#include <memory>
#include <SFML/Graphics.hpp>
#include "Scene.h"

class SceneManager
{
public:
	void SetScene(std::unique_ptr<Scene> scene);
	void Update(float deltaTime);
	void Draw(sf::RenderWindow& window);

private:
	std::unique_ptr<Scene> currentScene;
};