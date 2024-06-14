#include <iostream>

using namespace std;
 
const double CARTON_CAPACITY = 3.78;
 
int main()
{
	double milkQuantity;
    double costOfOneLiter;
    double profitOnACarton; 
	int noOfMilkCartons;
    double totalCostOfMilk;
    double profit;

	cout << "Enter, in liters, the total quantity of the milk produced: ";
	cin >> milkQuantity;
	cout << endl;

	cout << "Enter the cost of producing one liter of milk: ";
	cin >> costOfOneLiter;
	cout << endl;

	cout << "Enter the profit on each carton of milk: ";
	cin >> profitOnACarton;
	cout << endl;

    noOfMilkCartons = static_cast<int> (milkQuantity / CARTON_CAPACITY + 0.5);
    totalCostOfMilk = milkQuantity * costOfOneLiter;
    profit = noOfMilkCartons * profitOnACarton;

    cout << "The number of milk cartons needed to hold the milk: " 
         << noOfMilkCartons << endl;

    cout << "The cost of producing the milk: $" 
         << totalCostOfMilk << endl;

    cout << "Profit: $" 
         << profit << endl;

	return 0;
}