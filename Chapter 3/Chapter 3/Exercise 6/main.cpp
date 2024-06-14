
#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
	double density, mass; 

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the mass (in grams) of an object: ";
    cin >> mass;
    cout << endl;

	cout << "Enter the density (in in grams per cubic centimeters) of an object: ";
    cin >> density;
    cout << endl;

    cout << "The volume of the object is: " << mass / density << endl;

	return 0;
}