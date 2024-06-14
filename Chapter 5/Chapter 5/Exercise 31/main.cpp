 
#include <iostream> 
#include <iomanip>
#include <cmath> 

using namespace std;

int main()
{
	int n;
    int num = 2;
    double e = 2.0;
    int temp;
    long long fact;

    cout << fixed << showpoint << setprecision(15);

	cout << "Enter the value of n: ";
	cin >> n;
	cout << endl;

 	while (num <= n)
    {
        temp = num;
        fact = 1;

        while (temp != 0)
        {
            fact = fact * temp;
            temp = temp - 1;
        }

        e = e + 1 / static_cast<double> (fact);

        num++;
    }

    cout << "e = " << e << endl;

	return 0;
}