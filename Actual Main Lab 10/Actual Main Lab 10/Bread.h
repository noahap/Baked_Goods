/*Noah Pittenger, Section 001, noahap@byu.edu*/
#pragma once
#include "BakedGood.h"

class Bread :
	public BakedGood
{
public:
	Bread();
	Bread(std::string bakedGoodType);
	std::string ToStr();
	virtual double DiscountCalculator(int count);
private:
	std::string typeOfBakedGood;
};

