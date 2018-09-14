/*Noah Pittenger, Section 001, noahap@byu.edu*/
#pragma once
#include "BakedGood.h"

class Cake :
	public BakedGood
{
public:
	Cake(); 
	Cake(std::string flavor, std::string frosting, double price);
protected:
	std::string bakedGoodFlavor;
	std::string bakedGoodFrosting;
};

