#include <iostream>
#include "Dog.h"
#include "Choice.h"

int main()
{
	Choice c{ "Head toward the street", "street", "" };
	std::cout << c.text << " -> " << c.nextSceneId << "\n";
	if (c.requiredItem.empty())
	{
		std::cout << "No item needed\n";
	}
	return 0;
}

