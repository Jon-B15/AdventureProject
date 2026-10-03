#include "Dog.h"

Dog::Dog(const std::string& dogName, const std::string& dogBreed)
	: name(dogName), breed(dogBreed)
{

}

std::string Dog::getName() const { return name; }
std::string Dog::getBreed() const { return breed; }