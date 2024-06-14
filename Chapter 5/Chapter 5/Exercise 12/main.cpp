#include <iostream>
using namespace std;

int main()
{
    int townAPop;
    int townBPop;
    double growthRateTownA;
    double growthRateTownB;
    int numOfYears = 0;

    cout << "Enter the current population of town A: ";
    cin >> townAPop;
    cout << endl;

    cout << "Enter the current population of town B: ";
    cin >> townBPop;
    cout << endl;

    cout << "Enter the growth rate of town A: ";
    cin >> growthRateTownA;
    cout << endl;

    cout << "Enter the growth rate of town B: ";
    cin >> growthRateTownB;
    cout << endl;

    while (townAPop < townBPop)
    {
        townAPop = static_cast<int>(townAPop * (1 + growthRateTownA / 100.0));
        townBPop = static_cast<int>(townBPop * (1 + growthRateTownB / 100.0));
        numOfYears++;
    }

    cout << "After " << numOfYears << " year(s) the population of town A "
         << "will be greater than or equal to the population of town B." << endl;
    cout << "After " << numOfYears << " population of town A is "
         << townAPop << endl;
    cout << "After " << numOfYears << " population of town B is "
         << townBPop << endl;
   

	return 0;
}