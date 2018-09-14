/*Noah Pittenger, Section 001, noahap@byu.edu
Test Case 1:
Input:
Bread Rye 12
Layer-cake Funfetti vanilla 15 3
Cupcake Blue cream-cheese white 30
done
Output:

Invoice:

Baked Good                                                                   Quantity    Total
Rye Bread ($4.50)                                                                  12    36.00
15-layer Funfetti cake with vanilla frosting ($51.00)                               3   147.00
Blue cupcake with cream-cheese frosting and white sprinkles ($2.15)                30    52.50
Totals                                                                             45   235.50
Good Bye
Result: Passed

Test Case 2:
Input:
Cupcake Marble vanilla white 15
Layer-cake Red-Velvet cream-cheese 15 3
Bread Amish 16
done
Output:
Order Confirmations:
Marble cupcake with vanilla frosting and white sprinkles ($1.95)
Marble cupcake with vanilla frosting and white sprinkles ($1.95)
Marble cupcake with vanilla frosting and white sprinkles ($1.95)
Marble cupcake with vanilla frosting and white sprinkles ($1.95)
Marble cupcake with vanilla frosting and white sprinkles ($1.95)
Marble cupcake with vanilla frosting and white sprinkles ($1.95)
Marble cupcake with vanilla frosting and white sprinkles ($1.95)
Marble cupcake with vanilla frosting and white sprinkles ($1.95)
Marble cupcake with vanilla frosting and white sprinkles ($1.95)
Marble cupcake with vanilla frosting and white sprinkles ($1.95)
Marble cupcake with vanilla frosting and white sprinkles ($1.95)
Marble cupcake with vanilla frosting and white sprinkles ($1.95)
Marble cupcake with vanilla frosting and white sprinkles ($1.95)
Marble cupcake with vanilla frosting and white sprinkles ($1.95)
Marble cupcake with vanilla frosting and white sprinkles ($1.95)
15-layer Red-Velvet cake with cream-cheese frosting ($66.00)
15-layer Red-Velvet cake with cream-cheese frosting ($66.00)
15-layer Red-Velvet cake with cream-cheese frosting ($66.00)
Amish Bread ($4.50)
Amish Bread ($4.50)
Amish Bread ($4.50)
Amish Bread ($4.50)
Amish Bread ($4.50)
Amish Bread ($4.50)
Amish Bread ($4.50)
Amish Bread ($4.50)
Amish Bread ($4.50)
Amish Bread ($4.50)
Amish Bread ($4.50)
Amish Bread ($4.50)
Amish Bread ($4.50)
Amish Bread ($4.50)
Amish Bread ($4.50)
Amish Bread ($4.50)
Result: Passed

Test Case 3:
Input:
Cupcake Pumkin-spice cinnamon orange 3
Layer-cake Fiesta nacho-cheese 2 6
Bread Old-Fashioned 5
done
Output:
Order Confirmations:
Pumkin-spice cupcake with cinnamon frosting and orange sprinkles ($1.95)
Pumkin-spice cupcake with cinnamon frosting and orange sprinkles ($1.95)
Pumkin-spice cupcake with cinnamon frosting and orange sprinkles ($1.95)
2-layer Fiesta cake with nacho-cheese frosting ($12.00)
2-layer Fiesta cake with nacho-cheese frosting ($12.00)
2-layer Fiesta cake with nacho-cheese frosting ($12.00)
2-layer Fiesta cake with nacho-cheese frosting ($12.00)
2-layer Fiesta cake with nacho-cheese frosting ($12.00)
2-layer Fiesta cake with nacho-cheese frosting ($12.00)
Old-Fashioned Bread ($4.50)
Old-Fashioned Bread ($4.50)
Old-Fashioned Bread ($4.50)
Old-Fashioned Bread ($4.50)
Old-Fashioned Bread ($4.50)

Invoice:
Baked Good                                                                   Quantity    Total
Pumkin-spice cupcake with cinnamon frosting and orange sprinkles ($1.95)            3     4.95
2-layer Fiesta cake with nacho-cheese frosting ($12.00)                             6    60.00
Old-Fashioned Bread ($4.50)                                                         5    18.00
Totals                                                                             14    82.95
Good Bye
Result: Passed
*/
#include <iostream>
#include <string>
#include <iomanip>
#include<vector>
#include <sstream>


#include "BakedGood.h"
#include "Bread.h"
#include "LayerCake.h"
#include "CupCake.h"
using namespace std;

int main() {
	BakedGood *addBakedGoodPtr = nullptr;
	vector<BakedGood*> bakedGood;
	ostringstream stringVariables;
	string layerCakeCreamCheeseOrFrosting;
	string userOrder = "";
	string bakedGoodClass;
	string bakedGoodType;
	string orderConfirmation;
	string cupCakeCreamCheeseOrFrosting;
	string cupCakeSprinkles;
	int bakedGoodQuantity;
	int layerCakeNumLayers;
	int totalQuantity = 0;
	const int PRICE_PRECISION = 2;
	const int MIN_LAYER_AMOUNT = 1;
	const int PRICE_OF_BREAD = 4.50;
	const int BAKED_GOOD_WIDTH = 75;
	const int OTHER_WIDTHS = 9;
	double totalCostLayerCake = 0.0;
	double totalCupCakeCost;
	double totalCost = 0.0;
	const double CUP_CAKE_BASE_PRICE = 1.95;
	const double CREAM_CHEESE_CCAKE_COST = 0.20;
	const double BREAD_PRICE = 4.50;
	const double BASE_LAYER_CAKE_PRICE = 9.00;
	const double CREAM_CHEESE_LAYER_COST = 1.00;
	const double LAYER_PRICE_EXTENTSION = 3.00;
	



	std::cout << "**Bread and Cakes Bakery**" << endl << endl;
	std::cout << "Enter sub-order(enter \"done\" to finish)" << endl;

	do {
		std::cout << "Sub-order:" << endl;
		cin >> bakedGoodClass;
	
		if (bakedGoodClass == "Bread") {
			cin >> bakedGoodType;
			cin >> bakedGoodQuantity;
			for (int i = 0; i < bakedGoodQuantity; ++i) {
				bakedGood.push_back(new Bread(bakedGoodType));
				stringVariables << bakedGood.at(bakedGood.size() - 1)->ToStr() << endl;
			}
			
		}

		else if (bakedGoodClass == "Layer-cake") {
			cin >> bakedGoodType;
			cin >> layerCakeCreamCheeseOrFrosting;
			cin >> layerCakeNumLayers;
			cin >> bakedGoodQuantity;
			totalCostLayerCake = 0;
			totalCostLayerCake += BASE_LAYER_CAKE_PRICE;
			if (layerCakeCreamCheeseOrFrosting == "cream-cheese") {
				totalCostLayerCake += (CREAM_CHEESE_LAYER_COST * layerCakeNumLayers);
			}
			if (layerCakeNumLayers > MIN_LAYER_AMOUNT) {
				totalCostLayerCake += ((layerCakeNumLayers - MIN_LAYER_AMOUNT) * LAYER_PRICE_EXTENTSION);
			}

			for (int i = 0; i < bakedGoodQuantity; ++i) {
				bakedGood.push_back(new LayerCake(layerCakeCreamCheeseOrFrosting, 
					bakedGoodType, layerCakeNumLayers, totalCostLayerCake));
				stringVariables << bakedGood.at(bakedGood.size() - 1)->ToStr() << endl;
			}
		}

		else if (bakedGoodClass == "Cupcake") {
			cin >> bakedGoodType;
			cin >> cupCakeCreamCheeseOrFrosting;
			cin >> cupCakeSprinkles;
			cin >> bakedGoodQuantity;
			totalCupCakeCost = CUP_CAKE_BASE_PRICE;
			if (cupCakeCreamCheeseOrFrosting == "cream-cheese") {
				totalCupCakeCost += CREAM_CHEESE_CCAKE_COST;
			}

			for (int i = 0; i < bakedGoodQuantity; ++i) {
				bakedGood.push_back(new CupCake(bakedGoodType, cupCakeCreamCheeseOrFrosting, cupCakeSprinkles, totalCupCakeCost));
				stringVariables << bakedGood.at(bakedGood.size() - 1)->ToStr() << endl;
			}
		}

		else if (bakedGoodClass == "done") {
			break;
		}

		totalQuantity += bakedGoodQuantity;

	} while (bakedGoodClass != "done");

	std::cout << "Order Confirmations:" << endl;
	orderConfirmation = stringVariables.str();
	std::cout << orderConfirmation << endl;


	std::cout << "Invoice:" << endl;
	std::cout << "Baked Good" << setw(BAKED_GOOD_WIDTH) << "Quantity" << setw(OTHER_WIDTHS) << setw(OTHER_WIDTHS) << "Total" << endl;

	for (int i = 0; i < bakedGood.size(); ++i) {
		const int NEXT_ITEM = 1;
		int countMatches = 1;
		for (int j = i + NEXT_ITEM; j < bakedGood.size(); ++j) {
			if (bakedGood.at(i)->ToStr() == bakedGood.at(j)->ToStr()) {
				++countMatches;
				delete bakedGood.at(j);
				bakedGood.erase(bakedGood.begin() + j);
				--j;
			}
		}

	totalCost += bakedGood.at(i)->DiscountCalculator(countMatches);
	std::cout << left << setw(BAKED_GOOD_WIDTH) << bakedGood.at(i)->ToStr() << right << setw(OTHER_WIDTHS) << countMatches
		<< right << setw(OTHER_WIDTHS) << fixed << setprecision(PRICE_PRECISION)
		<< bakedGood.at(i)->DiscountCalculator(countMatches) << endl;
	}
	std::cout << "Totals" << setw(BAKED_GOOD_WIDTH) << totalQuantity 
		<< setw(OTHER_WIDTHS) << setw(OTHER_WIDTHS) << fixed << setprecision(PRICE_PRECISION) << totalCost << endl;

	std::cout << "Good Bye" << endl;


	//std::system("pause");
	return 0;
}

