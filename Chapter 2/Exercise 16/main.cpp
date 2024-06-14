#include <iostream>

using namespace std; 

const double CARTON_CAPACITY = 3.78;
const double COST_OF_ONE_LITER = 0.38;
const double PROFIT_ON_A_CARTON = 0.27;
   
int main()  
{
	double milkQuantity; 
	int noOfMilkCartons;
    double totalCostOfMilk;
    double profit;

	cout << "Enter, in liters, the total quantity of milk produced: ";
	cin >> milkQuantity;
	cout << endl;

    noOfMilkCartons = static_cast<int> (milkQuantity / CARTON_CAPACITY + 0.5);
    totalCostOfMilk = milkQuantity * COST_OF_ONE_LITER;
    profit = noOfMilkCartons * PROFIT_ON_A_CARTON;

    cout << "The number of milk cartons needed to hold milk: " 
         << noOfMilkCartons << endl;

    cout << "The cost of producing milk: $" 
         << totalCostOfMilk << endl;

    cout << "Profit: $" 
         << profit << endl;

	return 0;
}