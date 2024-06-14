#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	double x1, y1, x2, y2;
    double m; // slope
    double b; // y-intercept; if m is nonzero, then b = mx1+y1.

    cout << fixed << showpoint << setprecision(2);
   
    cout << "Enter the coordinates, x1, y1, x2, y2, of two points "
         << "in the x-y plane: ";
    cin >> x1 >> y1 >> x2 >> y2;
    cout << endl;

    if (x1 == x2)
        cout << "The line passing through the points (" << x1 << ", " << y1
             << ") and (" << x2 << ", " << y2 << ") is x = " << x1 << endl
             << "It is a vertical line." << endl;
    else
    {
        m = (y2 - y1) / (x2 - x1);
        b = m * x1 + y1;

        cout << "The line passing through the points (" << x1 << ", " << y1
             << ") and (" << x2 << ", " << y2 << ") is y = " 
             << m << "x + " << b << endl;

        if (m == 0)
            cout << "It is a horizontal line." << endl;
        else if (m > 0)
            cout << "The line is increasing." << endl;
        else
            cout << "The line is decreasing." << endl;
    }

    return 0;
}