#include "Star.h"


std::vector<std::string> starTypeName = { "Red", "White", "Blue", "Yellow" };


Star::Star(std::string name, starType type)
{
	this->name = name;
	this->type = type;
}

void Star::print()
{

	std::cout << "I am the infamous " << starTypeName[int(this->type)] << " star, which has the name " << this->name << "!";

}

