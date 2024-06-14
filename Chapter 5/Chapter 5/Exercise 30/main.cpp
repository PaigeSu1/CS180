 
#include <iostream>  
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int start;
    int limit;
    double temp;

    cout << fixed << showpoint << setprecision(8);

	cout << "Enter the start and the last value of n: ";
	cin >> start >> limit;
	cout << endl;

    cout << setw(15) << "n" << setw(15) << "(1 + 1/n)^n" << endl;

	while (start <= limit)
    {
        cout << setw(15) << start;
        temp = pow(1 + 1 / static_cast<double> (start), start);
        cout << setw(15) << temp << endl;
        start = start + 100;
    }

	return 0;
}
