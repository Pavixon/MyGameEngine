#pragma once

#include <memory>
#include <SFML/Graphics.hpp>
#include "../Core/Scene.h"
#include "ResourceManager.h"
#include "../Managers/RenderManager.h"

class SceneManager
{
public:
	void SetScene(std::unique_ptr<Scene> scene);
	void Update(float deltaTime);
	void Draw(RenderManager& renderManager, sf::RenderWindow& window, const ResourceManager& resourceManager);

private:
	std::unique_ptr<Scene> currentScene;
};