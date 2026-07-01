#include "Engine.h"
#include "Player.h"
#include "Wall.h"
#include "CollisionManager.h"
#include <iostream>

Engine::Engine()
	: window(sf::VideoMode({ 1280, 720 }), "Silnik 2D")
{
	//Adding Player
	player = std::make_shared<Player>();
	objectManager.AddObject(player);

	//Adding Walls
	walls.push_back(std::make_shared<Wall>(
		sf::Vector2f(300.f, 200.f),
		sf::Vector2f(200.f, 50.f)
	));

	walls.push_back(std::make_shared<Wall>(
		sf::Vector2f(500.f, 400.f),
		sf::Vector2f(200.f, 50.f)
	));

	walls.push_back(std::make_shared<Wall>(
		sf::Vector2f(100.f, 500.f),
		sf::Vector2f(400.f, 50.f)
	));

	for (auto& wall : walls)
	{
		objectManager.AddObject(wall);
	}

	//Adding Enemy
	enemy = std::make_shared<Enemy>(sf::Vector2f(700.f, 300.f));
	enemy->SetTarget(player);
	
	objectManager.AddObject(enemy);
}

void Engine::Run()
{
	sf::Clock clock;

	while (window.isOpen())
	{
		float deltaTime = clock.restart().asSeconds();

		ProcessEvents();
		Update(deltaTime);
		Render();
	}
}

void Engine::ProcessEvents()
{

	while (const std::optional event = window.pollEvent())
	{
		if (event->is<sf::Event::Closed>())
		{
			window.close();
		}
	}
}

void Engine::Update(float deltaTime)
{
	objectManager.Update(deltaTime);

	//Stops player if colliding with wall
	for (auto& wall : walls)
	{
		if (CollisionManager::CheckCollision(*player, *wall))
		{
			player->UndoMove();
			break;
		}
	}
}

void Engine::Render()
{
	window.clear(sf::Color::Black);

	objectManager.Draw(window);

	window.display();
}
