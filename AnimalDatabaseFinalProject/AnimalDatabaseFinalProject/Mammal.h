#pragma once
#include "Animal.h"
class Mammal :	public Animal
{
private:
	std::vector <std::shared_ptr<Mammal>> _Mammals;

public:
	Mammal(std::string name,std::string description);

	void addMammal(std::shared_ptr<Mammal> newMammal);
	~Mammal();
};

