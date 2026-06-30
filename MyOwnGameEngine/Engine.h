#pragma once
#include <SFML/Graphics.hpp>
#include "GameObjectManager.h"

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
	GameObjectManager objectMenager;
};