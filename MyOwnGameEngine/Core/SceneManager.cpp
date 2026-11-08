#include "SceneManager.h"

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

void SceneManager::Draw(RenderManager& renderManager, sf::RenderWindow& window)
{
	if (currentScene)
	{
		currentScene->Draw(renderManager, window);
	}
}
