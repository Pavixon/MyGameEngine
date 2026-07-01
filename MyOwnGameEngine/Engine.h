#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include "ResourceManager.h"
#include "Scene.h"


class Engine
{
public:
	Engine();
	void Run();

private:
	void ProcessEvents();
	void Update(float deltaTime);
	void Render();

	sf::RenderWindow window;
	ResourceManager resourceManager;
	std::unique_ptr<Scene> currentScene;
};