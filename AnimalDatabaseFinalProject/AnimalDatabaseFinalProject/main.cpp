#include <iostream>
#include <string>
#include <memory>
#include "Animal.h"
#include "Mammal.h"
#include "AquaticMammal.h"
#include "Reptiles.h"

using namespace std;


int main()
{
	auto dog = make_shared<Mammal>("Dog", "- Domesticated house pet derived from wolves");
	dog->addMammal(dog);	dog->addAnimal(dog);

	auto blueWhale = make_shared<AquaticMammal>("Blue Whale", "- Underwater beast that eats microscopic beings");
	blueWhale->addAquaticMammal(blueWhale);	blueWhale->addMammal(blueWhale);	blueWhale->addAnimal(blueWhale);

	auto lizard = make_shared<Reptiles>("Lizard", "- Small snake with legs");
	lizard->addReptile(lizard); lizard->addAnimal(lizard);


	cout << "Welcome to your animal database! Please select an option." << endl;
	int choice = -1;
	while (choice != 0)
	{

		cout << "1. View Mammals \n2. View Aquatic Mammals \n3. View Reptiles \n4. View All Animals \n5. Add Animal \n6. Search for Animal \n\n0. Exit" << endl;

		cin >> choice;
		switch (choice) {
		case 1: {
			system("cls");
			cout << "There is nothing implemented." << endl;
		} break;
		case 2: {
			system("cls");
			cout << "There is nothing implemented." << endl;
		} break;
		case 3: {
			system("cls");
			cout << "There is nothing implemented." << endl;
		} break;
		case 4: {
			system("cls");
			cout << "There is nothing implemented." << endl;
		} break;
		case 5: {
			system("cls");
			cout << "There is nothing implemented." << endl;
		} break;
		case 6: {
			system("cls");
			cout << "There is nothing implemented." << endl;
		} break;
		}
	}
	system("pause");
	return 0;
}

