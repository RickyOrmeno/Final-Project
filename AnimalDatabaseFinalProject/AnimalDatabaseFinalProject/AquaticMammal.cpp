#include "AquaticMammal.h"



AquaticMammal::AquaticMammal(std::string name, std::string description) : AquaticMammal(name, description)
{
}

void AquaticMammal::addAquaticMammal(std::shared_ptr<AquaticMammal> newAquaticMammal)
{
	_AquaticMammals.push_back(newAquaticMammal);
}


AquaticMammal::~AquaticMammal()
{
}
