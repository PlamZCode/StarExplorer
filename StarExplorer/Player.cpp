#include "Player.h"
#include <iostream>


Player::Player(std::string name)
{
	this->name = name;
}

int Player::assignShip(std::string name, int hull, int fuel)
{

	this->ship = new Ship(name, hull, fuel);

	std::cout << "\n I've been assigned a new ship!\n";

    return 0;
}

void Player::print()
{

	std::cout << "\n I am captain " << this->name << "! \n I pilot the mighty vessel named " << this->ship->getName();

}

Ship* Player::getShip()
{
	return this->ship;
}
