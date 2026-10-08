#include "Game.h"
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <iostream>

//constructor, starting in the park scene
Game::Game() : currentSceneId("park")
{
	buildScenes();
}

//printing the opening and using the dog
void Game::showIntro(const Dog& dog) const
{
	std::cout << "\nIt was a sunny afternoon at the park, and "
		<< dog.getName() << " the " << dog.getBreed()
		<< " was pulling happily at the leash. Then a squirrel darted past. "
		<< "The lease slipped free, and the chase was on. By the time the squirrel "
		<< "vanished up a tree, " << dog.getName()
		<< " looked around. Their owner was gone, and home was far away.\n\n";
}

//build every scene and connects the choices
void Game::buildScenes()
{
	scenes.emplace("park", Scene("park",
		"A sunny park. Your owner is nowhere in sight."));
	scenes.at("park").addChoice("Sniff for your owner's scent", "trail");
	scenes.at("park").addChoice("Check the playground", "playground");
	scenes.at("park").addChoice("Head toward the street", "street");

	//item scene: the third argument is the item the player picks up here
	scenes.emplace("playground", Scene("playground",
		"An empty playground. A bright water gun sits in the sandbox.", "water gun"));
	scenes.at("playground").addChoice("Go back to the park", "park");
	scenes.at("playground").addChoice("Take the path to the street", "street");

	//item scene: your own leash is a weapon
	scenes.emplace("trail", Scene("trail",
		"A muddy trail. Your leash is snagged on a branch. It could make a good whip.", "leash whip"));
	scenes.at("trail").addChoice("Follow the trail to the alley", "alley");
	scenes.at("trail").addChoice("Go back to the park", "park");

	scenes.emplace("street", Scene("street",
		"A busy street. Cars rush past, so crossing is too dangerous."));
	scenes.at("street").addChoice("Check the bus stop", "busstop");
	scenes.at("street").addChoice("Walk along the sidewalk to the alley", "alley");
	scenes.at("street").addChoice("Go back to the park", "park");

	//key item scene
	scenes.emplace("busstop", Scene("busstop",
		"A quiet bus stop. Something shiny glints under the bench: a brass gate key.", "gate key"));
	scenes.at("busstop").addChoice("Go back to the street", "street");

	//the encounter: the third argument of addChoice is a required item,
	//so each weapon option only appears if the player has found that weapon
	scenes.emplace("alley", Scene("alley",
		"A narrow alley. A growling stray dog blocks the way home."));
	scenes.at("alley").addChoice("Blast it with the water gun", "gate", "water gun");
	scenes.at("alley").addChoice("Snap the leash whip at it", "gate", "leash whip");
	scenes.at("alley").addChoice("Run back to the park", "park");
	scenes.at("alley").addChoice("Try to sneak past", "lost");

	//the locked gate: the unlock option needs the gate key
	scenes.emplace("gate", Scene("gate",
		"The stray runs off! Your neighborhood is just ahead, but a tall gate is locked."));
	scenes.at("gate").addChoice("Unlock the gate with the key", "home", "gate key");
	scenes.at("gate").addChoice("Bark for help", "shelter");
	scenes.at("gate").addChoice("Go back to the street", "street");

	//endings: the last argument (true) marks the scene as an ending
	scenes.emplace("home", Scene("home",
		"The gate clicks open. You run to your front door and bark. Your owner rushes out and hugs you. You made it home! THE END",
		"", true));
	scenes.emplace("lost", Scene("lost",
		"The stray chases you into the dark. You wander all night, still lost. GAME OVER",
		"", true));
	scenes.emplace("shelter", Scene("shelter",
		"Your barking brings a stranger, who takes you to a shelter. You are safe, but still not home. THE END",
		"", true));
}

//returns true if the inventory contains the given item
bool Game::hasItem(const std::string& item) const
{
	return std::find(inventory.begin(), inventory.end(), item) != inventory.end();
}

//reads the whole line and only accepts a number between min and max
int Game::readNumber(int min, int max) const
{
	while (true)
	{
		std::cout << "> ";
		std::string line;

		//getline returns false if input is closed
		if (!std::getline(std::cin, line))
		{
			std::exit(0);
		}

		//line must be non-empty and all digits
		bool allDigits = !line.empty();
		for (char c : line)
		{
			if (!std::isdigit(static_cast<unsigned char>(c)))
			{
				allDigits = false;
				break;
			}
		}

		//no overflowing an int
		if (allDigits && line.size() <= 4)
		{
			int value = std::stoi(line);
			if (value >= min && value <= max)
			{
				return value;
			}
		}
		std::cout << "Please enter a number from " << min << " to " << max << ".\n";
	}
}

//showing the numbered breed list
void Game::run()
{
	std::cout << "=== Let's Go Home ===\n\n";

	std::vector<std::string> breeds = { "Golden Doodle", "Husky", "Pomeranian", "Corgi" };

	std::cout << "Choose your dog's breed:\n";
	for (size_t i = 0; i < breeds.size(); ++i)
	{
		std::cout << (i + 1) << ". " << breeds[i] << "\n";
	}

	int pick = readNumber(1, static_cast<int>(breeds.size()));
	std::string breed = breeds[pick - 1];

	std::string name;
	while (name.empty())
	{
		std::cout << "Name your dog: ";

		if (!std::getline(std::cin, name))
		{
			std::exit(0);
		}
	}

	//build dog
	Dog player(name, breed);
	showIntro(player);

	while (true)
	{
		//.at() finds the scene by id
		const Scene& scene = scenes.at(currentSceneId);
		std::cout << scene.getDescription() << "\n";

		if (!scene.getItemFound().empty() && !hasItem(scene.getItemFound()))
		{
			inventory.push_back(scene.getItemFound());
			std::cout << "You picked up: " << scene.getItemFound() << "\n";
		}

		//stops the loop
		if (scene.isEnding())
		{
			break;
		}

		//collects only the choices the player can actually take
		std::vector<Choice> available;
		for (const Choice& choice : scene.getChoices())
		{
			if (choice.requiredItem.empty() || hasItem(choice.requiredItem))
			{
				available.push_back(choice);
			}
		}

		//show the numbered list
		std::cout << "\n";
		for (size_t i = 0; i < available.size(); ++i)
		{
			std::cout << (i + 1) << ". " << available[i].text << "\n";
		}
		int pick = readNumber(1, static_cast<int>(available.size()));
		currentSceneId = available[pick - 1].nextSceneId;
		std::cout << "\n";
	}
}