#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;

int main() 
{
    double traditionalTVLength, lcdTVLength, diagonal;
    double traditionalTVArea, lcdTVArea;

    int choice;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the length of the diagonal of the TV (in inches): ";
    cin >> diagonal;
    cout << endl;

    cout << "Enter which type of TVs area you would like to see." << endl
         << "1: Traditional TV area." << endl
         << "2: LCD TV Area" << endl
         << "3: Both types of TVs area" << endl;
    cin >> choice;
    cout << endl;

        //Traditional TV Area
    traditionalTVLength =  0.8 * diagonal;
    traditionalTVArea = traditionalTVLength * (3 / 4.0) * traditionalTVLength;

        //LCD TV Area
    lcdTVLength = 16* sqrt(1 / 337.0) * diagonal;
    lcdTVArea = lcdTVLength * (9 / 16.0) * lcdTVLength;

    if (choice == 1)
    {
        cout << " Traditional TV length: " << traditionalTVLength << " inches" << endl;
        cout << " Traditional TV width: " << 0.75 * traditionalTVLength << " inches" << endl;
        cout << " Traditional TV area: " << traditionalTVArea << " square inches" << endl;
    }
    else if (choice == 2)
    {
        cout << " LCD TV length: " << lcdTVLength << " inches" << endl;
        cout << " LCD TV width: " << (9 / 16.0) * lcdTVLength << " inches" << endl;
        cout << " LCD TV area: " << lcdTVArea << " square inches" << endl;
    }
    else if (choice == 3)
    {
        cout << " Traditional TV length: " << traditionalTVLength << " inches" << endl;
        cout << " Traditional TV width: " << 0.75 * traditionalTVLength << " inches" << endl;
        cout << " Traditional TV area: " << traditionalTVArea << " square inches" << endl;

        cout << " LCD TV length: " << lcdTVLength << " inches" << endl;
        cout << " LCD TV width: " << (9 / 16.0) * lcdTVLength << " inches" << endl;
        cout << " LCD TV area: " << lcdTVArea << " square inches" << endl;
    }
    else
        cout << "Invalid chioce." << endl;

    return 0;
}