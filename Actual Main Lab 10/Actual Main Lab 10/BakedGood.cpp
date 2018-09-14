/*Noah Pittenger, Section 001, noahap@byu.edu*/
#include <sstream>
#include <iomanip>
#include <iostream>
#include "BakedGood.h"

using namespace std;

BakedGood::BakedGood(double bakedGoodPrice, int bakedGoodQuantity) {
	bakedGoodCost = bakedGoodPrice;
	bakedGoodAmount = bakedGoodQuantity;
}

std::string BakedGood::ToStr() {
	std::ostringstream printPrice;
	std::string outputString;
	const int PRICE_PRECISION = 2;

	printPrice << fixed << setprecision(PRICE_PRECISION);
	printPrice << "($" << bakedGoodCost << ")";
	outputString = printPrice.str();

	return outputString;
}



