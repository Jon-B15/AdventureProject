#pragma once
#include <map>
#include <string>
#include <vector>
#include "Dog.h"
#include "Scene.h"

class Game
{
public:
	Game();
	void run();

private:
	//How to play section
	void showInstructions() const;

	//map to store value pairs to jump to any scene
	std::map<std::string, Scene> scenes;

	//vector for the inventory
	std::vector<std::string> inventory;

	//which scene the player is in
	std::string currentSceneId;

	//setup helper
	void buildScenes();

	//steps
	void showIntro(const Dog& dog) const;

	//utilities
	bool hasItem(const std::string& item) const;
	int readNumber(int min, int max) const; //will keep asking until valid input

};

