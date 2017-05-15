#include "Mammal.h"


Mammal::Mammal(std::string name, std::string description) : Animal(name, description)
{
}


void Mammal::addMammal(std::shared_ptr<Mammal> newMammal)
{
	_Mammals.push_back(newMammal);
}

Mammal::~Mammal()
{
}
