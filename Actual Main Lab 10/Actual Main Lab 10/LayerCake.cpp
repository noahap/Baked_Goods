/*Noah Pittenger, Section 001, noahap@byu.edu*/
#include "LayerCake.h"
#include "Cake.h"

LayerCake::LayerCake() {
	numLayers = 0;
}
LayerCake::LayerCake(std::string flavor, std::string frosting, int numberLayers, double priceOfGood) 
	: Cake (frosting, flavor, priceOfGood) {
		numLayers = numberLayers;
}

std::string LayerCake::ToStr() {
	std::string userOrder;
	
	userOrder = std::to_string(numLayers) + "-layer " + bakedGoodFlavor + " cake with " 
		+ bakedGoodFrosting + " frosting " + BakedGood::ToStr();
	
	return userOrder;
}
double LayerCake::DiscountCalculator(int count) {
	const int LCAKE_DISCOUNT_QUANTITY = 3;
	double totalCostForLayerCake = 0.0;
	double totalDiscount = 0.0;
	const double LCAKE_DISCOUNT = 2.00;
	
	if (count >= LCAKE_DISCOUNT_QUANTITY) {
		totalCostForLayerCake = ((bakedGoodCost - LCAKE_DISCOUNT) * count);
	}
	else {
		totalCostForLayerCake = (bakedGoodCost * count);
	}

	return totalCostForLayerCake;
}

