#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "GameObjectManager.h"
#include "ResourceManager.h"
#include "Player.h"
#include "Wall.h"
#include "Enemy.h"


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
	std::vector<std::shared_ptr<Wall>> walls;
	std::shared_ptr<Enemy> enemy;
};