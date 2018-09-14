/*Noah Pittenger, Section 001, noahap@byu.edu*/
#pragma once
#include "Cake.h"

class CupCake :
	public Cake
{
public:
	CupCake();
	CupCake(std::string frosting, std::string flavor, std::string colorOfSprinkles, double priceOfGood);
	std::string ToStr();
	virtual double DiscountCalculator(int count);
private: 
	std::string colorSprinkles;
};

