#include <iostream>
#include <cmath>
using namespace std;
 
int main ()
{	
    int num, temp, sum;
    char sign;

    cout <<"Enter a positive integer: ";
    cin >> num;
    cout << endl;

    temp = num;

    sum = 0;
    sign = '+';

    do
    {
        switch (sign)
        {
        case '+' : 
            sum = sum + num % 10;
            sign = '-';
            break;
        case '-' : 
            sum = sum - num % 10;
            sign = '+';
        }

        num = num / 10;       //remove the last digit
    } 
    while (num > 0);

    if (sum % 11 == 0)
        cout << temp << " is divisible by 11" << endl;
    else
        cout << temp << " is not divisible by 11" << endl;

	return 0;
}
