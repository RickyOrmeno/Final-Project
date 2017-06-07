#include "Reptiles.h"



Reptiles::Reptiles(std::string name, std::string description) : Animal(name, description)
{

}

void Reptiles::addReptile(std::shared_ptr<Reptiles> newReptile)
{
	_Reptiles.push_back(newReptile);
}

void Reptiles::showReptiles()
{
//	_Reptiles.pop_back();
}

Reptiles::~Reptiles()
{
}
