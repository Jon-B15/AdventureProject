#pragma once
#include <string>

class Dog
{
public:
	//wanting the user to create the dog name, needing a default constructor
	Dog();

	//const for name and breed. I may have the user enter a name for the dog.
	Dog(const std::string& dogName, const std::string& dogBreed);
	std::string getName() const;
	std::string getBreed() const;

private:
	std::string name;
	std::string breed;

};