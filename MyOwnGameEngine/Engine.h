#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"

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
	GameObject testObject;
};