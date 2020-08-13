#pragma once
#include <iostream>
#include <string>
#include<vector>

enum class starType {
    Red,
    White,
    Blue,
    Yellow
};

class Star
{
	std::string name;
    starType type;
    

public:

    Star(std::string name, starType type);

    void print();

};

