
#include <iostream>
#include <cmath>

using namespace std;

const int cubicFeetInaYard = 27;
  
int main()
{
	double concrete;
    double width, thickness;
    double x, y;
    double lengthToWidthRatio;
        
    cout << "Enter the amount of premixed concrete (in cubic yards) ordered: ";
	cin >> concrete;
	cout << endl;

    cout << "Enter the thickness of patio (in inches): ";
    cin >> thickness;

    cout << "Enter the ratio of length to width (If the ratio is 3 to 2, then enter 3 2): ";
	cin >> x >> y;
	cout << endl;

    lengthToWidthRatio = x / y;

    width = sqrt(concrete * cubicFeetInaYard / (lengthToWidthRatio * thickness / 12));

    cout << "The length, width, and thickness of the patio are: "
        << "Length = " << lengthToWidthRatio * width << " feet (foot), "
        << "Width = " << width << " feet (foot), "
        << "Thickness = " << thickness << " inche(s)." << endl;

	return 0;
}
