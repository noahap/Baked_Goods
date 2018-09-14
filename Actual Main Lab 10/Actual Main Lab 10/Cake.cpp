/*Noah Pittenger, Section 001, noahap@byu.edu*/
#include "Cake.h"

Cake::Cake() {
	bakedGoodFlavor = "none";
	bakedGoodFrosting = "none";
}
Cake::Cake(std::string flavor, std::string frosting, double price) : BakedGood(price) {
	bakedGoodFlavor = flavor;
	bakedGoodFrosting = frosting;
}





