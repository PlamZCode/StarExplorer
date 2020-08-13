#include "StarSystems.h"


StarSystems::StarSystems()
{

	this->starMap = new ThreeLevelTreeNode;

}

void StarSystems::addStar(std::string name, starType type)
{

	this->starMap->data = new Star(name, type);

}
