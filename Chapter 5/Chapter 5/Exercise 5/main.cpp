#include <iostream>
using namespace std;
 
int main ()
{	
    int num1, num2;
    int multiple3Count = 0;
    int multiple5Count = 0;
    int temp;
			
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << endl;

    if (num2 < num1)
    {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }

    temp = num1;
    while (temp <= num2)
    {
        if (temp % 3 == 0)
            multiple3Count++;

        if (temp % 5 == 0)
            multiple5Count++;
        temp++;
    }

    cout << "Multiples of 3 between " << num1 
         << " and " << num2 << ": " << multiple3Count << endl;
    cout << "Multiples of 5 between " << num1
        << " and " << num2 << ": " << multiple5Count << endl;

    return 0;
}