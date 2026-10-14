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
	std::string getId() const;
	std::string getDescription() const;
	std::string getItemFound() const;
	const std::vector<Choice>& getChoices() const;
	bool isEnding() const;

	//needing a setter to run in the scenes portion for street art and gate art
	void setArt(const std::string& newArt);
	const std::string& getArt() const;

private:
	std::string art;
	std::string id;
	std::string description;
	std::string itemFound;
	bool ending;
	std::vector<Choice> choices;

};

