#pragma once
#include <SFML/Graphics.hpp>

class Engine
{
public:
	Engine();
	void run();

private:
	void processEvents();
	void update(float deltaTime);
	void render();

	sf::RenderWindow window;
};