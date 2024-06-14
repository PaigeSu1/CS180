  
#include <iostream>  

using namespace std;

void digitCount(long long num, int& eCount, int& oCount, int& zCount);

int main()
{
	long long number;

    int evenCount = 0;
    int oddCount = 0;
    int zeroCount = 0;

    cout << "Enter an integer: ";
    cin >> number;
    cout << endl;

    digitCount(number, evenCount, oddCount, zeroCount);
    
    cout << "The number of even digits: " << evenCount << endl;
    cout << "The number of odd digits: " << oddCount << endl;
    cout << "The number of zeros: " << zeroCount << endl;

	return 0;
}

void digitCount(long long num, int& eCount, int& oCount, int& zCount)
{
    int digit;

    bool done = false;

    do
    {
        if (num < 10)
            done = true;

        digit = num % 10;

        num = num / 10;

        if (digit % 2 == 0)
        {
            eCount++;

            if (digit == 0)
                zCount++;
        }
        else
            oCount++;
    }
    while (!done);
}