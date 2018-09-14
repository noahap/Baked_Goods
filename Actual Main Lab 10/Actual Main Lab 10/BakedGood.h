/*Noah Pittenger, Section 001, noahap@byu.edu*/
#pragma once
#include <string>

class BakedGood
{
public:
	BakedGood(double bakedGoodPrice = 0.0, int bakedGoodQuantity = 0);
	virtual std::string ToStr();
	virtual double DiscountCalculator(int count) = 0;
protected:
	int bakedGoodAmount;
	double bakedGoodCost;
	
};

