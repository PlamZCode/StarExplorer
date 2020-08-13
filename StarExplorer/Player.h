#pragma once
#include <string>
#include "Ship.h"

class Player
{

	std::string name;

	Ship* ship;
	
public:

	Player(std::string name);

	int assignShip(std::string name, int hull, int fuel);

	void print();

	Ship* getShip();
};

