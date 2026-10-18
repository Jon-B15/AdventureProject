#include "Scene.h"

//constructor for scene. setting each member as the scene is created
Scene::Scene(const std::string& sceneId,
	const std::string& sceneText,
	const std::string& itemFound,
	bool ending) : id(sceneId), description(sceneText), itemFound(itemFound), ending(ending)
{

}

void Scene::setArt(const std::string& newArt) { art = newArt; }
const std::string& Scene::getArt() const { return art; }

//building addChoice using brace initialization, adding it to the end of the vector
void Scene::addChoice(const std::string& text,
	const std::string& nextSceneId,
	const std::string& requiredItem) 
{
	choices.push_back(Choice{ text, nextSceneId, requiredItem });
}

const std::vector<Choice>& Scene::getChoices() const { return choices; }

//getters, returing the matching private member
std::string Scene::getId() const { return id; }
std::string Scene::getDescription() const { return description; }
std::string Scene::getItemFound() const { return itemFound; }
bool Scene::isEnding() const { return ending; }