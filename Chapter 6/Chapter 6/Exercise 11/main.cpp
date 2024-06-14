//Header files   
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
//Global variable 
const double PI = 3.1416;

//Prototype Function "Debug list"
double distance(double firstX, double firstY, double secondX, double secondY);

double radius(double firstX, double firstY, double secondX, double secondY);

double circumference(double cRadius);

double area(double cRadius);

int main()
{
	double x1, x2, y1, y2;
	double circleRadius;
	//pretty decimal point 
	cout << fixed << showpoint << setprecision(2);

	cout << "Enter the x and y coordinates of the center of the circle: ";
	cin >> x1 >> y1;
	cout << endl;

	cout << "Enter the x and y coordinates of a point on the circle: ";
	cin >> x2 >> y2;
	cout << endl;

	circleRadius = radius(x1, y1, x2, y2);

	cout << "Radius =        " << circleRadius << endl;
	cout << "Diameter =      " << 2 * circleRadius << endl;
	cout << "Circumference = " << circumference(circleRadius) << endl;
	cout << "Area =          " << area(circleRadius) << endl;

	return 0;
}

//function 
double distance(double firstX, double firstY, 
				double secondX, double secondY)
{
	return sqrt(pow((secondX - firstX), 2) + pow((secondY - firstY), 2));
}
//function 
double radius(double firstX, double firstY, 
				double secondX, double secondY)
{
	return distance(firstX, firstY, secondX, secondY);
}
//function
double circumference(double cRadius)
{
	return (2 * PI * cRadius);
}
//function
double area(double cRadius)
{
	return (PI * pow(cRadius, 2));
}