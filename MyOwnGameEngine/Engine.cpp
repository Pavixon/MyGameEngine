#include "Engine.h"
#include "Player.h"

Engine::Engine()
	: window(sf::VideoMode({ 1280, 720 }), "Silnik 2D")
{
	resourceManager.LoadTexture("player", "Assets/player.png");

	auto player = std::make_shared<Player>();
	objectManager.AddObject(player);
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
}

void Engine::Render()
{
	window.clear(sf::Color::Black);

	objectManager.Draw(window);

	window.display();
}
