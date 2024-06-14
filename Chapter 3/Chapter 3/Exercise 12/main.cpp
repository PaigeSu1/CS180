//Suppose that the distance traveled in t hours by the first car is d1 miles and
//the distance traveled by the second car is d2 miles. After t hours the shortest 
//distance between the cars is sqrt(d1^2 + d2^2).

#include <iostream> 
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	double avgSpeedCarA;
    double avgSpeedCarB;
    int hrs;
    int minutes;
    double elapsedTime;
    double shortestDistance;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter average speed of the first car (in miles per hour): ";
    cin >> avgSpeedCarA;
    cout << endl;
 
    cout << "Enter average speed of the second car (in miles per hour): ";
    cin >> avgSpeedCarB;
    cout << endl;
    
    cout << "Enter the elapsed (travel) time (in hours and minutes)" << endl
         << "(for two hours and 30 minutes enter 2 30): ";
    cin >> hrs >> minutes;
    cout << endl;  

    elapsedTime = hrs + minutes / 60.0;

    shortestDistance = sqrt(pow(avgSpeedCarA * elapsedTime, 2) + pow(avgSpeedCarB * elapsedTime, 2));

	cout << "The shortest distance between the cars is:  " << shortestDistance << " mile(s)." << endl;
    
    return 0;
}