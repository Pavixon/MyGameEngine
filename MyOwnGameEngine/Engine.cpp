#include "Engine.h"

Engine::Engine()
	: window(sf::VideoMode({ 1280, 720 }), "Silnik 2D")
{

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
	testObject.Update(deltaTime);
}

void Engine::Render()
{
	window.clear(sf::Color::Black);

	testObject.Draw(window);

	window.display();
}
