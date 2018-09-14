/*Noah Pittenger, Section 001, noahap@byu.edu*/
#pragma once
#include "Cake.h"

class LayerCake :
	public Cake
{
public:
	LayerCake();
	LayerCake(std::string flavor, std::string frosting, int numberLayers, double priceOfGood);
	std::string ToStr();
	virtual double DiscountCalculator(int count);
private:
	int numLayers;
};

