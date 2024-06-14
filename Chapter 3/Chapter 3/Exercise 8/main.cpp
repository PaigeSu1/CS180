 
#include <iostream> 
#include <iomanip>
using namespace std;

const double salePricePercent = 0.15;
const double profit = 0.10;

int main()
{
	double merchandiseCost, empSalary, rent, electricityCost;
    double totalCost;
    double markup;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter merchandise cost: ";
    cin >> merchandiseCost;
    cout << endl;
    
    cout << "Enter employees'total salary: ";
    cin >> empSalary;
    cout << endl;

	cout << "Enter store rent: ";
    cin >> rent;
    cout << endl;
    
    cout << "Enter electricity cost: ";
    cin >> electricityCost;
    cout << endl;

    totalCost = merchandiseCost + empSalary + rent + electricityCost;

    markup = (1 / ((1 - salePricePercent) * merchandiseCost)) * (totalCost + merchandiseCost * profit);
    
	cout << "Merchandise should be marked up by approximately " << (markup * 100) << "%" << endl;

    return 0;
}