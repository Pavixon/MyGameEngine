#include "../Engine/Core/Engine.h"
#include "../Engine/Managers/ResourceManager.h"
#include "Scenes/SampleScene.h"


int main() 
{
	ResourceManager resourceManager;

	Engine engine(sf::Vector2u(1280, 720), "PrototypeGame", resourceManager);
	
	engine.SetScene(std::make_unique<SampleScene>());

	engine.Run();


	return 0;
}