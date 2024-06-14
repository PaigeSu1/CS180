#include <iostream>

using namespace std;                                   
 
int main()
{
	double fuelTankCapacity;
    double milesPerGallon;

	cout << "Enter the fuel tank capacity in gallons: ";
	cin >> fuelTankCapacity; 
	cout << endl;

	cout << "Enter the miles per gallon: ";
    cin >> milesPerGallon;
    cout << endl;

    cout << "The number of miles the car can be driven is "
         << fuelTankCapacity *  milesPerGallon 
         << " miles." << endl;

	return 0;
}