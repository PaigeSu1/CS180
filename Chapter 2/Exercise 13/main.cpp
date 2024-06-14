#include <iostream>
  
using namespace std;

int main() 
{ 
	double originalPrice;
	double markedUpPercentage;
	double salesTaxRate;
	double sellingPrice;  
	double salesTax;
	double finalPrice;

	cout << "Enter the original price of the item: ";
	cin >> originalPrice;
	cout << endl;

	cout << "Enter the marked up percentage: ";
	cin >> markedUpPercentage;
	cout << endl;

	cout << "Enter the sales tax rate: ";
	cin >> salesTaxRate;
	cout << endl;

	sellingPrice = originalPrice + originalPrice * markedUpPercentage / 100;
	salesTax = sellingPrice * salesTaxRate / 100;
	finalPrice = sellingPrice + salesTax;

	cout << "The original price = $" << originalPrice << endl;
	cout << "The price is marked up by " << markedUpPercentage 
		 << "%" << endl;
	cout << "The selling price = $" << sellingPrice << endl;
	cout << "The sales rate = " << salesTaxRate << "%" << endl;
	cout << "The sales tax = $" << salesTax << endl;
	cout << "The final price = $" << finalPrice << endl;

	return 0;
}