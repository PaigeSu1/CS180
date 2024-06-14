// Suppose that the original dimensions of the candy are l X w X t.
// Suppose that the volume is reduced by p%. Suppose that length and
// width are reduced by a%. Let q = 1 - (p/100) and b = 1 - (a/100).
// Then the new dimensions of the candy are 
// bl X bw X t. From the given conditions, we have
// (1 - (p/100)) * l * w * t = bl * bw * t
// q  = b * b
// b = sqrt(q)

#include <iostream> 
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	double length;
    double width;
    double thickness;
    
    double p;
    double q;
    double b;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the length, width, and thickness of the candy separated by space(s) ";
    cin >> length >> width >> thickness;
    cout << endl;
 
    cout << "Enter the amount of the reduced volume as a percentage: ";
    cin >> p;
    cout << endl;
    
    q = 1 - (p / 100);
    b = sqrt(q);

    cout << "The new dimensions of the candy are: "
        << b * length << " x " << b * width << " x " << thickness << endl;
    
    return 0;
}