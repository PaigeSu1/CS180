//Circumference of the circel = length of the wire.
//radius = wireLength / (2 * PI).

#include <iostream>

using namespace std;

const double PI = 3.1416; 
  
int main()
{
	double wireLength;
    double radius;
	
	cout << "Enter the length of the wire: ";
	cin >> wireLength;
	cout << endl;

    radius = wireLength / (2 * PI);

	cout << "Radius of the circle: " <<radius << endl;
	cout << "Area of the circle: " << PI * radius * radius << endl;

	return 0;
}