#pragma once
#include <SFML/Graphics.hpp>
#include "GameObjectManager.h"
#include "ResourceManager.h"
#include "Player.h"
#include "Wall.h"

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
	GameObjectManager objectManager;
	ResourceManager resourceManager;

	std::shared_ptr<Player> player;
	std::shared_ptr<Wall> wall;
};