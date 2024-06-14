#include <iostream>
using namespace std;

int main() 
{
    int number;
    bool isPrime = true;

    cout << "Enter an integer between 1 and 1000 (inclusive): ";
    cin >> number;
    cout << endl;

    if (1 <= number && number <= 1000)
    {
        switch (number)
        {
        case 2: case 3: case 5: case 7: case 11: case 13:
        case 17: case 19: case 23: case 29: case 31: 
            cout << number << " is prime." << endl;
            break;
        default:
            if (number % 2 == 0)
            {  
                cout << number << " is divisible by " << 2 << ", ";
                isPrime = false;
            }

            if (number % 3 == 0)
            { 
                if (isPrime)
                    cout << number << " is divisible by "; 
                cout << 3 << ", ";
                isPrime = false;
            }

            if (number % 5 == 0)
            { 
                if (isPrime)
                    cout << number << " is divisible by "; 
                cout << 5 << ", ";
                isPrime = false;
            }

            if (number % 7 == 0)
            { 
                if (isPrime)
                    cout << number << " is divisible by "; 
                cout << 7 << ", ";
                isPrime = false;
            }

            if (number % 11 == 0)
            { 
                if (isPrime)
                    cout << number << " is divisible by "; 
                cout << 11 << ", ";
                isPrime = false;
            }

            if (number % 13 == 0)
            { 
                if (isPrime)
                    cout << number << " is divisible by "; 
                cout << 13 << ", ";
                isPrime = false;
            }

            if (number % 17 == 0)
            { 
                if (isPrime)
                    cout << number << " is divisible by "; 
                cout << 17 << ", ";
                isPrime = false;
            }

            if (number % 19 == 0)
            { 
                if (isPrime)
                    cout << number << " is divisible by "; 
                cout << 19 << ", ";
                isPrime = false;
            }

            if (number % 23 == 0)
            { 
                if (isPrime)
                    cout << number << " is divisible by "; 
                cout << 23 << ", ";
                isPrime = false;
            }

            if (number % 29 == 0)
            { 
                if (isPrime)
                    cout << number << " is divisible by "; 
                cout << 29 << ", ";
                isPrime = false;
            }

            if (number % 31 == 0)
            { 
                if (isPrime)
                    cout << number << " is divisible by "; 
                cout << 31 << ".";
                isPrime = false;
            }

            cout << endl;

            if (isPrime)
                cout << number << " is a prime." << endl;
            else 
                cout << number << " is not a prime." << endl; 
        }
    }
    else
        cout << "You must enter a number between 1 and 1000 (inclusive)." << endl;

    return 0;
}
