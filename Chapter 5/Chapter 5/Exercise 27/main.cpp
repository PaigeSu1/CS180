  
//Chapter 5: Programming Exercise 27
//For a solution, see Ch5_ProgEx27_ReadMe.doc file

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
const double PI = 3.141592654;

void ConeVolume(double x, double n);

int main()
{
	double removedSectorLength;  
    double waxedPaperRad;
    double paperCupBaseRad; //r
    double paperCupHeight; //h
    double paperCupVol;
    double waxedPaperCircum;
    double maxVolume;

    double x;

	cout << fixed << showpoint << setprecision(6);

    cout << "Enter the radius of the circular waxed paper in inches: ";
    cin >> waxedPaperRad;
    cout << endl;

    x = 0.00;
    maxVolume = 0.0;
    removedSectorLength = 0.0;
    waxedPaperCircum = 2 * PI * waxedPaperRad;

    cout << fixed << showpoint << setprecision(2);

    while (x <= waxedPaperCircum)
    {
        paperCupBaseRad = waxedPaperRad  - (x / (2 * PI));
        paperCupHeight = sqrt(waxedPaperRad * waxedPaperRad - paperCupBaseRad * paperCupBaseRad);

        paperCupVol = (1.0 / 3.0) * PI * (paperCupBaseRad * paperCupBaseRad) * paperCupHeight;

        if (paperCupVol > maxVolume)
        {
            maxVolume = paperCupVol;
            removedSectorLength = x;
        }

        x = x + 0.01;
    }

    cout << "Length of the removed sector: " << removedSectorLength << " inch"<< endl;
    cout << "Max Volume " << maxVolume << " cubic inches"<< endl;

	return 0;
}