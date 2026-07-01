#include "Engine.h"
#include "BasicObject.h"

Engine::Engine()
	: window(sf::VideoMode({ 1280, 720 }), "Silnik 2D")
{
	auto object = std::make_shared<BasicObject>();
	object->SetPosition(sf::Vector2f(100.f, 100.f));
	object->SetSize(sf::Vector2f(50.f, 50.f));

	objectMenager.AddObject(object);
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
	objectMenager.Update(deltaTime);
}

void Engine::Render()
{
	window.clear(sf::Color::Black);

	objectMenager.Draw(window);

	window.display();
}
