#include <iostream>

using namespace std; 
 
int main()
{ 
	int quarters;
    int dimes;
    int nickels;

    int pennies; 

    cout << "Enter the number of quarters: ";
    cin >> quarters;
    cout << endl;
 
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    cout << endl;

    cout << "Enter the number of nickels: ";
    cin >> nickels;
    cout << endl;

    pennies = quarters * 25 + dimes * 10 + nickels * 5;

    cout << "The change in pennies = " << pennies << endl;

	return 0;
}