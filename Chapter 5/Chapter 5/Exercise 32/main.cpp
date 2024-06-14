 
#include <iostream> 
#include <iomanip>
#include <cmath> 

using namespace std;

int main()
{
	int n;
    double e;
    double x;

    cout << fixed << showpoint << setprecision(15);

	cout << "Enter the value of n: ";
	cin >> n;
	cout << endl;

    x = n + n;

 	while (n >= 2)
    {
        x = (n-1) + (n-1) / x;
        n--;
    }

    e = 2.0 + 1 / x;

    cout << "e = " << e << endl;

	return 0;
}