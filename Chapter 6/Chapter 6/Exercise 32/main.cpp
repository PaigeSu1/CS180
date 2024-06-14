//Program: gcd
  
#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b);
 
int main()
{
    int first;
    int second;
    
    cout << "Enter two non zero integers: ";
    cin >> first >> second;
    cout << endl;

    cout << "gcd(" << first << ", " << second << ") = " << gcd(first, second) << endl;

    return 0;
}

int gcd(int a, int b)
{
    int temp;
    
    a = abs(a);
    b = abs(b);

    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    while (a % b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }

    return b;
}
