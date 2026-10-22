#include <iostream>
#include "Dog.h"
#include "Choice.h"
#include "Game.h"


//asking player if they want to restart
bool askPlayAgain()
{
	while (true)
	{
		std::cout << "\nPlay again? (y/n): ";
		std::string answer;

		if (!std::getline(std::cin, answer))
		{
			return false;
		}
		if (answer == "y" || answer == "Y")
		{
			return true;
		}
		if (answer == "n" || answer == "N")
		{
			return false;
		}

		std::cout << "Please enter y or n.\n";
	}
}

int main()
{
	do
	{
		Game game;
		game.run();
	} while (askPlayAgain());

	std::cout << "\nThanks for playing!\n";
	return 0;

	Game game;
	game.run();
	return 0;
}

