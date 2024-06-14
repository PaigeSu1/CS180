
#include <iostream> 
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.14159;

int main()
{
	double cylinderRadius;
    double cylinderHeight;
    double cylinderVolume;
    double cubeSide;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the radius of the cylinder: ";
    cin >> cylinderRadius;
    cout << endl;
    
    cout << "Enter height of the cylinder: ";
    cin >> cylinderHeight;
    cout << endl;

    cylinderVolume = PI * cylinderRadius * cylinderRadius * cylinderHeight;

    cubeSide = pow(cylinderVolume, 1.0 / 3);

	cout << "Cube side: " << cubeSide << endl;
    
    return 0;
}