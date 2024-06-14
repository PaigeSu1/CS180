//Header files 
#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;

//Think of this like a global variable 
//because this will not change within the program
const double PI = 3.14159;

//Must always have a main function
int main()
{
    double r;

    cout << fixed << showpoint << setprecision(2); //make the decimal pretty

	cout << " sqrt(PI) = " << sqrt(PI) << endl;
                            //sqrt root function taking (const double PI = 3.14159)

    //user input 
    cout << "Enter a value of r: ";
    cin >> r;
    cout << endl;

    //Formula for Surface area 
    cout << "Surface area of the sphere: 4 * PI * " << r << " ^ 2 = "
         << 4.0 * PI * pow(r, 2) << endl;

    //Formula for Volume 
    cout << "Volume of the sphere: 4 / 3 * PI * " << r << " ^ 3 = "
         << 4.0 / 3.0 * PI * pow(r, 3) << endl;

	return 0;
}
