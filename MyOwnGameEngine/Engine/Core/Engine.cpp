#include "Engine.h"
#include "../../ExampleGame/Scenes/GameScene.h"

Engine::Engine()
	: window(sf::VideoMode({ 1280, 720 }), "MyOwnGameEngine")
{
	resourceManager.LoadTexture("player", "ExampleGame/Assets/player.png");
	resourceManager.LoadTexture("enemy", "ExampleGame/Assets/Enemy.png");
	sceneManager.SetScene(std::make_unique<GameScene>());
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
	sceneManager.Update(deltaTime);
}

void Engine::Render()
{
	window.clear(sf::Color::Black);

	sceneManager.Draw(renderManager, window, resourceManager);

	window.display();
}
