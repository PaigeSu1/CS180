#include <iostream>
using namespace std;

int main()
{
    long x;
    int count;
    long a_n;
    long largest;
    int position;

    cout << "Enter a nonnegative integer: ";
    cin >> x;
    cout << endl;

    count = 0;

    largest = x;
    position = 1;
    a_n = x;
    cout << a_n << ", ";

    while (a_n != 1)
    {
        if (a_n % 2 == 0)
            a_n = a_n / 2;
        else
            a_n = 3 * a_n + 1;

        count++;
        
        if (largest < a_n)
        {
            largest = a_n;
            position = count + 1;
        }

        cout << a_n <<", ";
    }

    cout << endl;
    cout << "The integer k such that a_k = 1 is " << count << endl;
    cout << "The largest number of the sequence is " << largest << endl;
    cout << "The position of the largest number is " << position << endl;

	return 0;
}