
#include <iostream>

using namespace std;

  
int main()
{
	double purchasingPrice;
    double minAmtToBeAddedToPurchPrice;
    double maxAmtToBeAddedToPurchPrice;
    double fixedCommission;
    double comissionAsaPercentage;
    double salesPersonMinCommission;
    double salesPersonMaxCommission;
            
    cout << "Enter the purchasing price of the car: ";
	cin >> purchasingPrice;
	cout << endl;

    cout << "Enter the minimum amount to be added to purchasing price of the car: ";
    cin >> minAmtToBeAddedToPurchPrice;
    cout << endl;

    cout << "Enter the maximum amount to be added to purchasing price of the car: ";
    cin >> maxAmtToBeAddedToPurchPrice;
    cout << endl;

    cout << "Enter sales person's fixed comission: ";
	cin >> fixedCommission;
	cout << endl;

    cout << "Enter the percentage of the commision: ";
	cin >> comissionAsaPercentage;
	cout << endl;

    salesPersonMinCommission = fixedCommission + comissionAsaPercentage * minAmtToBeAddedToPurchPrice / 100;
    salesPersonMaxCommission = fixedCommission + comissionAsaPercentage * maxAmtToBeAddedToPurchPrice / 100;

    cout << "Car's minimum selling price: $" << purchasingPrice + minAmtToBeAddedToPurchPrice << endl;
    cout << "Car's maximum selling price: $" << purchasingPrice + maxAmtToBeAddedToPurchPrice << endl;
    cout << "Sales person's commision range: $" << salesPersonMinCommission << " to $"
        << salesPersonMaxCommission << endl;

	return 0;
}