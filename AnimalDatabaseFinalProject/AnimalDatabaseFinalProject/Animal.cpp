#include "Animal.h"



Animal::Animal(std::string name, std::string description) : _name(name) , _description(description)
{
}

std::string Animal::getName()
{
	return _name;
}

std::string Animal::getDescription()
{
	return _description;
}

void Animal::addAnimal(std::shared_ptr<Animal> newAnimal)
{
	_Animals.push_back(newAnimal);
}


Animal::~Animal()
{
}
