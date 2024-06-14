 
//Chapter 5: Programming Exercise 28
//For solution, see Ch5_ProgEx28_ReadMe.doc file.

#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
    double noOfApartments;
    double rentPerApartment; //rent per apartment when all units 
                             //are occupied
    double maintenanceExpPerRentedApt;
    int noOfRentedUnits;
    double rentIncrease;   //rent increase to make a unit vacant

    double vacantUnits;
    double totalRentIncrease;  
    double adjustedRentPerApt; //rent per unit plus the total 
                               //rent increase per apartment  
    double totalRent;
    double totalMaintenanceExp;
    double profit;


	cout << fixed << showpoint << setprecision(2);

    cout << "Enter the number of apartments: ";
    cin >> noOfApartments;
    cout << endl;

    cout << "Enter rent for each apartment: ";
    cin >> rentPerApartment;
    cout << endl;

    cout <<"Enter maintanence expense for each rented apartment: ";
    cin >> maintenanceExpPerRentedApt;
    cout << endl;

    cout << "Enter the amount of rent increase per apartment: ";
    cin >> rentIncrease;
    cout << endl;

    int maxNoUnitsToRent = 0;
    double maxProfit = 0;

    for (noOfRentedUnits = 0; noOfRentedUnits < noOfApartments; noOfRentedUnits++)
    {
        vacantUnits = noOfApartments - noOfRentedUnits;
        totalRentIncrease = rentIncrease * vacantUnits;
        adjustedRentPerApt = rentPerApartment + totalRentIncrease;

        totalRent = noOfRentedUnits * adjustedRentPerApt;
        totalMaintenanceExp = noOfRentedUnits * maintenanceExpPerRentedApt;
        profit = totalRent - totalMaintenanceExp;

        if (maxProfit < profit)
        {
            maxProfit = profit;
            maxNoUnitsToRent = noOfRentedUnits;
        }
    }

    cout << "Maximum number of units to rent: " 
         << maxNoUnitsToRent << endl;
    cout << "Maximum profit: $" << maxProfit << endl;

	return 0;
}