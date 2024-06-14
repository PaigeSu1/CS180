#include <iostream>
#include <cmath>
using namespace std;
 
int main ()
{	
	int number;
	bool isPrime = true;

	int sqrtNum;
	int divisor = 3;

	cout << "Enter a positive integer greater than 1: ";
	cin >> number;
	cout << endl;

	cout << "The number you entered is: " << number << endl;
	
	if (number == 1 || number < 0)
		cout << "You must enter an integer greater than 1. " 
			 << "Execute program aqain" << endl;
	else if (number == 2)
        cout << "It is a prime number" << endl;
    else if (number % 2 == 0)
        cout << "It is not a prime number" << endl;
    else
    {
        sqrtNum = static_cast<int> (sqrt(static_cast<double>(number)));

        while (divisor <= sqrtNum)
        {
            if (number % divisor == 0)
            {
                cout << "It is not a prime number." << endl;
                isPrime = false;
                break;
            }
            else
                divisor = divisor + 2;
        }

        if (isPrime)
            cout << "It is a prime number" << endl;
    }

	return 0;
}
