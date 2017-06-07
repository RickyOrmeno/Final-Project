#include "AquaticMammal.h"



AquaticMammal::AquaticMammal(std::string name, std::string description) : Mammal(name, description)
{
}

void AquaticMammal::addAquaticMammal(std::shared_ptr<AquaticMammal> newAquaticMammal)
{
	_AquaticMammals.push_back(newAquaticMammal);
}

void AquaticMammal::showAquaticMammal()
{
//	 _AquaticMammals.pop_back;
}


AquaticMammal::~AquaticMammal()
{
}
