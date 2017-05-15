#pragma once
#include <string>
#include <vector>
#include <memory>

class Animal
{
private:
	std::string _name;
	std::string _description;
	std::vector <std::shared_ptr<Animal>> _Animals;
public:
	Animal(std::string name, std::string description);

	std::string getName();
	std::string getDescription();
	void addAnimal(std::shared_ptr<Animal> newAnimal);
	~Animal();
};

