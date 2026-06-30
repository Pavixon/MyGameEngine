#include "Engine.h"

Engine::Engine()
	: window(sf::VideoMode({ 1280, 720 }), "Silnik 2D")
{

}

void Engine::run()
{
	sf::Clock clock;

	while (window.isOpen())
	{
		float deltaTime = clock.restart().asSeconds();

		processEvents();
		update(deltaTime);
		render();
	}
}

void Engine::processEvents()
{

	while (const std::optional event = window.pollEvent())
	{
		if (event->is<sf::Event::Closed>())
		{
			window.close();
		}
	}
}

void Engine::update(float deltaTime)
{
	//Logic of the game
}

void Engine::render()
{
	window.clear(sf::Color::Black);

	//Rendering of objects

	window.display();
}
