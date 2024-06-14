#include <iostream> 

using namespace std;

const int POUNDS_IN_METRIC_TON = 2205; 
 
int main() 
{
	int amountOfRice;

    cout << "Enter the amount of rice, in pounds, in a bag: ";
    cin >> amountOfRice;
    cout << endl;

    cout << "The number of bags needed to fill a "
         << "metric ton of rice is approximately " 
         << POUNDS_IN_METRIC_TON / amountOfRice << endl;

	return 0;
} 