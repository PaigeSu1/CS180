    
#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

double min(double y, double z);
void maxVolume(double bLngth, double bWdth, 
               double& maxVolume, double& maxSqrSide);
 
int main()
{
	
    double boardArea;
    double boardLength;  //y
    double boardWidth;   //z
    double bVolume, bHt;

    double maxVolBoxBoardLn;
    double maxVolBoxBoardWd;
    double maxVolBoxHt;
    double maxVolBox;

	cout << fixed << showpoint << setprecision(3);

    cout << "Enter the area of the board: ";
    cin >> boardArea;
    cout << endl;

    boardWidth = 0.001;
    maxVolBox = 0;

    while (boardWidth <= boardArea)
    {
        boardLength = boardArea / boardWidth;

        maxVolume(boardLength, boardWidth, bVolume, bHt);

        if (maxVolBox < bVolume)
        {
            maxVolBoxBoardLn = boardLength;
            maxVolBoxBoardWd = boardWidth;
            maxVolBoxHt = bHt;
            maxVolBox = bVolume;
        }

        boardWidth += 0.001;
    }

    cout << "Length of the cardboard to maximize the volume: " 
        << maxVolBoxBoardLn << endl
        << "Width of the cardboard to maximize the volume: " 
        << maxVolBoxBoardLn << endl;

    cout << "Length of the box with maximum volume: " 
         << maxVolBoxBoardLn - 2 * maxVolBoxHt << endl
         << "Width of the box with maximum volume: "
         << maxVolBoxBoardWd - 2 * maxVolBoxHt  << endl
         << "Height of the box with maximum volume: " << maxVolBoxHt << endl
         << "Maximum Volume: " << maxVolBox << endl;
	
	return 0;
}

void maxVolume(double bLngth, double bWdth, 
               double& maxVolume, double& maxSqrSide)
{
    double sqrSide;  //x
    double boxVolume;

    double minSide = min(bLngth, bWdth);

    sqrSide = 0.001;    //initialize the side of the square

    maxVolume = 0.0;    //Set maxVolume to 0

    while (2 * sqrSide <= minSide)
    {
        boxVolume = (bLngth -  2 * sqrSide) * 
                     (bWdth -  2 * sqrSide) * sqrSide;

        if (maxVolume < boxVolume)
        {
            maxVolume = boxVolume;
            maxSqrSide = sqrSide;
        }

        sqrSide += 0.001;  //increment the side of the square
    }
}

double min(double y, double z)
{
	if (y <= z)
        return y;
    else
        return z;
}