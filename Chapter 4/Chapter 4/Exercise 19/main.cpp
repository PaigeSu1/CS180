#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
/* 
   1. Enter the total farm area in acres.
2. The number of vegetables, (one or two), that the user wants to grow.
3. If the user wants to grow two types of vegetables, then specify the portion of the farm land used for each type of vegetable. 
4. Enter the seed cost, plantation cost, fertilizing cost, labor cost, for each acre.
5. Enter vegetable selling price per acre.
6. Output the total revenue.
7. Output the profit/loss.
*/
int main() 
{
	double farmArea;
    int numOfVegetablesPlanted;
    double farmAreaForVeg;
    double seedCost;
    double plantationCost;
    double fertilizingCost;
    double laborCost;
    double vegSellingPricePerAcre;
    double farmingCost;
    double revenue;

    cout << fixed << showpoint << setprecision(2);
   
    cout << "Enter farm area in acres: ";
    cin >> farmArea;
    cout << endl;

    cout << "Enter the number of vegetables planted (1/2): ";
    cin >> numOfVegetablesPlanted;
    cout << endl;

    if (numOfVegetablesPlanted == 1)
    {
        cout << "Enter seed cost per acre: $";
        cin >> seedCost;
        cout << endl;

        cout << "Enter plantation cost per acre: $";
        cin >> plantationCost;
        cout << endl;
    
        cout << "Enter fertilizing cost per acre: $";
        cin >> fertilizingCost;
        cout << endl;
        
        cout << "Enter labor cost per acre: $";
        cin >> laborCost;
        cout << endl;

        cout << "Enter vegetable selling cost per acre: $";
        cin >> vegSellingPricePerAcre;
        cout << endl;

        farmingCost = (seedCost + plantationCost + fertilizingCost + laborCost) * farmArea;
        revenue = vegSellingPricePerAcre * farmArea;

        cout << "The total revenue is: " << revenue << endl;
        cout << "Profit/loss from farming: "; 

        if (revenue - farmingCost < 0)
            cout << "-";
        cout <<"$" << fabs(revenue - farmingCost) << endl;
    }
    else if (numOfVegetablesPlanted == 2)
    {
        cout << "Enter the portion (as a percentage) of land used "
             << "for the first vegetable: ";
        cin >> farmAreaForVeg;
        cout << endl;

        cout << "Enter first vegetable seed cost per acre: $";
        cin >> seedCost;
        cout << endl;

        cout << "Enter first vegetable plantation cost per acre: $";
        cin >> plantationCost;
        cout << endl;
        
        cout << "Enter first vegetable fertilizing cost per acre: $";
        cin >> fertilizingCost;
        cout << endl;

        cout << "Enter first vegetable labor cost per acre: $";
        cin >> laborCost;
        cout << endl;

        cout << "Enter first vegetable selling cost per acre: $";
        cin >> vegSellingPricePerAcre;
        cout << endl;

        farmingCost = (seedCost + plantationCost + fertilizingCost + laborCost) 
                      * farmArea * (farmAreaForVeg / 100);
        revenue = vegSellingPricePerAcre * farmArea * (farmAreaForVeg / 100);

        cout << "Enter second vegetable seed cost per acre: $";
        cin >> seedCost;
        cout << endl;

        cout << "Enter second vegetable plantation cost per acre: $";
        cin >> plantationCost;
        cout << endl;
        
        cout << "Enter second vegetable fertilizing cost per acre: $";
        cin >> fertilizingCost;
        cout << endl;

        cout << "Enter second vegetable labor cost per acre: $";
        cin >> laborCost;
        cout << endl;

        cout << "Enter second vegetable selling cost per acre: $";
        cin >> vegSellingPricePerAcre;
        cout << endl;

        farmingCost = farmingCost + (seedCost + plantationCost + fertilizingCost + laborCost) 
                      * farmArea * (1 - farmAreaForVeg / 100);
        revenue = revenue + vegSellingPricePerAcre 
                          * farmArea * (1 - farmAreaForVeg / 100);

        cout << "The total revenue is: " << revenue << endl;
        cout << "Profit/loss from farming: "; 

        if (revenue - farmingCost < 0)
            cout << "-";
        cout <<"$" << fabs(revenue - farmingCost) << endl;
    }

	return 0;
}