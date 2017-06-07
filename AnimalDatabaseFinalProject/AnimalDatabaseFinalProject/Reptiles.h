#pragma once
#include "Animal.h"
class Reptiles :	public Animal
{
private:
	std::vector <std::shared_ptr<Reptiles>> _Reptiles;

public:
	Reptiles(std::string name, std::string description);

	void addReptile(std::shared_ptr<Reptiles> newReptile);
	void showReptiles();
	~Reptiles();
};

