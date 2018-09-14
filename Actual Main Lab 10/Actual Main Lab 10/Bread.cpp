/*Noah Pittenger, Section 001, noahap@byu.edu*/
#include "Bread.h"

const double PRICE_OF_BREAD = 4.50;

Bread::Bread() 
	: BakedGood(PRICE_OF_BREAD)
{
	std::string typeOfBakedGood = "none";
}
Bread::Bread(std::string bakedGoodType) 
	: BakedGood(PRICE_OF_BREAD)
{
	typeOfBakedGood = bakedGoodType;
}
std::string Bread::ToStr() {
	std::string userOrder;

	userOrder = typeOfBakedGood + " Bread " + BakedGood::ToStr();

	return userOrder;
}
double Bread::DiscountCalculator(int count) {
	int totalDiscountLoaves = 0;
	const int DISCOUNT_BREAD_AMOUNT = 3;
	double totalDiscountPrice = 0.0;
	double totalCostForBread = 0.0;

	if (count >= DISCOUNT_BREAD_AMOUNT) {
		totalDiscountLoaves = count / DISCOUNT_BREAD_AMOUNT;
		totalDiscountPrice = totalDiscountLoaves * PRICE_OF_BREAD;
		totalCostForBread = (count * bakedGoodCost) - totalDiscountPrice;
	}
	else {
		totalCostForBread = (count * bakedGoodCost);
	}
	
	return totalCostForBread;
}

