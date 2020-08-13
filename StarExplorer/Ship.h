#pragma once

#include <string>

class Ship
{

	std::string name;
	int maxFuel;
	int maxHull;

	int currentFuel;
	int currentHull;


public:

	Ship(std::string name, int maxHull, int maxFuel);

	void print();
	void damage(int dmg);
	void heal(int hp);

	void useFuel();
	void loseFuel(int amount);



	std::string getName();


};

