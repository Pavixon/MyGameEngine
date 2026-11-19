#include "../Engine/Core/Engine.h"
#include "../Engine/Managers/ResourceManager.h"


int main() 
{
	ResourceManager resourceManager;

	Engine engine(sf::Vector2u(1280, 720), "WindowTitle", resourceManager);
	engine.Run();

	return 0;
}