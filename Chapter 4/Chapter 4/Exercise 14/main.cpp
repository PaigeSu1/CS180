#include <iostream>
#include <iomanip>
 
using namespace std;

int main()
{
    double hoursCarParked;
    double billingAmount;

    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << "Enter the number of hours the car is parked ";
    cin >> hoursCarParked;
    cout << endl;

    if (hoursCarParked <= 3)
        billingAmount = 5;
    else if (3 < hoursCarParked && hoursCarParked <= 9)
        billingAmount = 6 * static_cast<int>(hoursCarParked + 1);
    else
        billingAmount = 60;

    cout << "Please pay: $" << billingAmount << endl;
    
	return 0;
}