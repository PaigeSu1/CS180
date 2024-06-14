  
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 

void minCost(double dBetPowStatAndFac, double rvrWdth,
             double cOfPwrLnOnGrnd, double cofPwrLnUndWat,
             double& minCost, double& minPwrLnOnGrnd);

int main()
{
    double riverWidth;
    double distBetPowStatAndFac;
    double costOfPwrLnOnGrnd;
    double costofPwrLnUndWat;

    double minimumCost;
    double minPwrLnOnGrnd;
    double minPwrLnUndWat;

    cout << fixed << showpoint << setprecision(2) << endl;

    cout << "Enter the width of the river in miles: ";
    cin >> riverWidth;
    cout << endl;

    cout << "Enter the distance between power " 
         << "station and factory down the river in miles: ";
    cin >> distBetPowStatAndFac;
    cout << endl;

    cout <<"Enter the cost, per foot, of power line on the ground: ";
    cin >> costOfPwrLnOnGrnd;
    cout << endl;

    cout << "Enter the cost, per foot, of power line under water: ";
    cin >> costofPwrLnUndWat;

    minCost(distBetPowStatAndFac, riverWidth,
             costOfPwrLnOnGrnd, costofPwrLnUndWat,
             minimumCost, minPwrLnOnGrnd);

    cout << "Power line on ground: " << minPwrLnOnGrnd 
         << " miles." << endl;

    minPwrLnUndWat = sqrt(pow((distBetPowStatAndFac - minPwrLnOnGrnd), 2) 
                         + riverWidth * riverWidth);

    cout << "Power line under water: " << minPwrLnUndWat 
         << " miles." << endl;

    cout << "Minimum cost: $" << minimumCost << endl;

    return 0;
}

void minCost(double dBetPowStatAndFac, double rvrWdth,
             double cOfPwrLnOnGrnd, double cofPwrLnUndWat,
             double& minCost, double& minPwrLnOnGrnd)
{
    double pwrLnOnGrnd = 0.0;   //x
    double pwrLnUndWat;    //y
    double costFunc;

    minCost = 1000000000.00;
    minPwrLnOnGrnd = 0.0;

    while (pwrLnOnGrnd <= dBetPowStatAndFac)
    {
        pwrLnUndWat = sqrt( pow((dBetPowStatAndFac - pwrLnOnGrnd), 2) 
                      + rvrWdth * rvrWdth);
        costFunc = 5280 * (cOfPwrLnOnGrnd * pwrLnOnGrnd 
                          + cofPwrLnUndWat * pwrLnUndWat);

        if (minCost > costFunc)
        {
            minCost = costFunc;
            minPwrLnOnGrnd = pwrLnOnGrnd;
        }

        pwrLnOnGrnd += 0.001;
    }
}