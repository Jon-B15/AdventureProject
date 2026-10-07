#pragma once
#include <string>
#include <vector>
#include "Choice.h"


class Scene
{
public:
	//default scene
	Scene(const std::string& sceneId, 
		const std::string& sceneText, 
		const std::string& itemFound = "", 
		bool ending = false);

	//function for adding a choice
	void addChoice(const std::string& text,
		const std::string& nextSceneId,
		const std::string& requiredItem = "");

	//getters
	std::string getId();
	std::string getDescription();
	std::string getItemFound();
	bool isEnding();

private:
	std::string id;
	std::string description;
	std::string itemFound;
	bool ending;
	std::vector<Choice> choices;

};

