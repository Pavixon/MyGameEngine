#include "SceneManager.h"
#include "ResourceManager.h"
#include "RenderManager.h"

void SceneManager::SetScene(std::unique_ptr<Scene> scene)
{
	currentScene = std::move(scene);
}

void SceneManager::Update(float deltaTime)
{
	if (currentScene)
	{
		currentScene->Update(deltaTime);
	}
}

void SceneManager::Draw(RenderManager& renderManager, sf::RenderWindow& window, const ResourceManager& resourceManager)
{
	if (currentScene)
	{
		currentScene->Draw(renderManager, window, resourceManager);
	}
}
