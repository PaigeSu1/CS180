
#include <iostream> 

using namespace std;

int main()
{
    int num;
    long long fact = 1;

    cout << "Enter a nonnegative integer: ";
    cin >> num;
    cout << endl;

    cout << num << "! = ";

    if (num >= 1)
        while (num != 0)
        {
            fact = fact * num;
            num = num - 1;
        }

    cout << fact << endl;

    return 0;
} 
