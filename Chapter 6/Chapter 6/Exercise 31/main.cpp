  
#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;

const double PI = 3.141592654;

void longestPipe(double wHallway1, double wHallway2, 
                 double& maxTheta);

int main()
{
    double widthHallway1;
    double widthHallway2;
    double maxTheta;

	cout << fixed << showpoint << setprecision(6);

    cout << "Enter the width of first hallway: ";
    cin >> widthHallway1;
    cout << endl;

    cout << "Enter the width of second hallway: ";
    cin >> widthHallway2;
    cout << endl;

    longestPipe(widthHallway1, widthHallway2, maxTheta);

    cout << "Theta: " << maxTheta << endl;
    cout << "Length of the longest pipe: "
         << static_cast<int> (widthHallway1 / sin(maxTheta) + 
                              widthHallway2 / cos(maxTheta))
         <<endl;

	return 0;
}

void longestPipe(double wHallway1, double wHallway2, 
                 double& maxTheta)
{

    double theta = 0.01;
    double l;
    double minL = 1000000.00;

    maxTheta = 0;

    while (theta < PI / 2)
    {
        l = wHallway1 / sin(theta) + wHallway2 / cos(theta);

        if (minL > l)
        {
            minL = l;
            maxTheta = theta;
        }

        theta += 0.01;
    }
}