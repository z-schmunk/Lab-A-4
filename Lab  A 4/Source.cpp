// Zac Schmunk 9/19/2024
// Calculate tax based on sale of items

#include <iostream>
using namespace std;

int main() {
	double SalesTax1 = 0.0625;
	double SalesTax2 = 0.065; 
	double Sale, FinalPrice;
	
	cout << "What was the total of the purchase before tax?\n";
	cin >> Sale;
	
	if (Sale <= 13.0) {
		FinalPrice = Sale * SalesTax1;
	}
	else if (Sale > 13.0) 
	{
		FinalPrice = Sale * SalesTax2;
	}
	
	int FinalPrice2 = FinalPrice * 100.0+.5;
		FinalPrice = FinalPrice2 / 100.0;
	cout << "Your final price is $" << FinalPrice << ".\n";
}