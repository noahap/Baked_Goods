/*Noah Pittenger, Section 001, noahap@byu.edu*/
#include "CupCake.h"
#include "Cake.h"

const int BASE_PRICE_OF_LCAKE = 9.00;

CupCake::CupCake() {
	colorSprinkles = "none";
}
CupCake::CupCake(std::string frosting, std::string flavor, std::string colorOfSprinkles, double priceOfGood) 
	: Cake (frosting, flavor, priceOfGood) {
		colorSprinkles = colorOfSprinkles;
}
std::string CupCake::ToStr() {
	std::string userOrder;
	userOrder = bakedGoodFlavor + " cupcake with " + bakedGoodFrosting + " frosting and " 
		+ colorSprinkles + " sprinkles " + BakedGood::ToStr();

	return userOrder;
}
double CupCake::DiscountCalculator(int count) {
	const int FIRST_CCAKE_DISC_QUANTITY = 2;
	const int SECOND_CCAKE_DISC_QUANTITY = 4;
	double totalCostCupCake = 0;
	const double TWO_CCAKE_DISCOUNT = 0.30;
	const double FOUR_CCAKE_DISCOUNT = .40;
	
	if ((count >= FIRST_CCAKE_DISC_QUANTITY) && (count < SECOND_CCAKE_DISC_QUANTITY)) {
		totalCostCupCake = (bakedGoodCost - TWO_CCAKE_DISCOUNT) * count;
	}
	else if (count >= SECOND_CCAKE_DISC_QUANTITY) {
		totalCostCupCake = (bakedGoodCost - FOUR_CCAKE_DISCOUNT) * count;
	}
	else {
		totalCostCupCake = (bakedGoodCost * count);
	}

	return totalCostCupCake;
}
