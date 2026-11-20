#include "Engine.h"

Engine::Engine(const sf::Vector2u& windowSize, const std::string& windowTitle, ResourceManager& resourceManager)
	: window(sf::VideoMode(windowSize), windowTitle, sf::Style::Titlebar | sf::Style::Close),
	  resourceManager(resourceManager)
{
}

void Engine::SetScene(std::unique_ptr<Scene> scene)
{
	sceneManager.SetScene(std::move(scene));
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

		if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
		{
			if (keyPressed->code == sf::Keyboard::Key::Escape)
			{
				window.close();
			}
		}
	}
}

void Engine::Update(float deltaTime)
{
	sceneManager.Update(deltaTime);
}

void Engine::Render()
{
	window.clear(sf::Color::Black);

	sceneManager.Draw(renderManager, window, resourceManager);

	window.display();
}
