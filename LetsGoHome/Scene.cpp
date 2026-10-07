#include "Scene.h"

//constructor for scene. setting each member as the scene is created
Scene::Scene(const std::string& sceneId,
	const std::string& sceneText,
	const std::string& itemFound,
	bool ending) : id(sceneId), description(sceneText), itemFound(itemFound), ending(ending)
{

}

//building addChoice using brace initialization, adding it to the end of the vector
void Scene::addChoice(const std::string& text,
	const std::string& nextSceneId,
	const std::string& requiredItem) 
{
	choices.push_back(Choice{ text, nextSceneId, requiredItem });
}

//getters, returing the matching private member
std::string Scene::getId() { return id; }
std::string Scene::getDescription() { return description; }
std::string Scene::getItemFound() { return itemFound; }
bool Scene::isEnding() { return ending; }