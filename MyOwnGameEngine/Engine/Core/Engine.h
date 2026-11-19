#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include "../Managers/ResourceManager.h"
#include "Scene.h"
#include "../Managers/SceneManager.h"
#include "../Managers/RenderManager.h"


class Engine
{
public:
	Engine(const sf::Vector2u& windowSize, const std::string& windowTitle, ResourceManager& resourceManager);
	void Run();
	void SetScene(std::unique_ptr<Scene> scene);

private:
	void ProcessEvents();
	void Update(float deltaTime);
	void Render();

	sf::RenderWindow window;
	ResourceManager& resourceManager;
	SceneManager sceneManager;
	RenderManager renderManager;
};