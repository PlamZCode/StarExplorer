#include "Ship.h"
#include <iostream>

Ship::Ship(std::string name, int maxHull, int maxFuel)
{

	this->name = name;
	this->maxFuel = maxFuel;
	this->maxHull = maxHull;

	this->currentFuel = maxFuel;
	this->currentHull = maxHull;

}

void Ship::print()
{
	std::cout 
		<< "\n\nHello there, I'm the SS " << this->name 
		<< "!\n I have "<< this->currentFuel 
		<< " fuel left, as well as a hull " << this->currentHull << " points strong!\n\n";
}

void Ship::damage(int dmg)
{
	this->currentHull -= dmg;
	
	std:: cout << "\n\nI took " << dmg << " damages!";
}

void Ship::heal(int hp)
{
	this->currentHull += hp;

	std::cout << "\n\nI healed " << hp << " damages!";
}

void Ship::useFuel()
{
	this->loseFuel(1);
}

void Ship::loseFuel(int amount)
{
	this->currentFuel -= amount;
}

std::string Ship::getName()
{
	return this->name;
}
