#pragma once

#include <iostream>
#include <string>
#include "Star.h"

struct ThreeLevelTreeNode
{
    Star* data;
    ThreeLevelTreeNode *left, *center, *right;
};

class StarSystems
{

    struct ThreeLevelTreeNode* starMap;

public:

    StarSystems();

    void addStar(std::string name, starType type);

};

