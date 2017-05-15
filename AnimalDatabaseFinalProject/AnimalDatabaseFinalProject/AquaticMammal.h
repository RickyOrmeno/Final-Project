#pragma once
#include "Mammal.h"
class AquaticMammal :	public Mammal
{
private:
	std::vector <std::shared_ptr<AquaticMammal>> _AquaticMammals;

public:
	AquaticMammal(std::string name, std::string description);
	
	void addAquaticMammal(std::shared_ptr<AquaticMammal> newAquaticMammal);

	~AquaticMammal();
};

