//Header files   
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//ProtoType Functions
void getData(int& wind, int& fahrenheit);
int calculateWindChillFactor(int wind, int fahrenheit);

int main()
{
	int windSpeed;
	int temperatureFahrenheit;
	int windChillFactor;

    cout << fixed << showpoint << setprecision(2);

    getData(windSpeed, temperatureFahrenheit);

	windChillFactor = calculateWindChillFactor(windSpeed, temperatureFahrenheit);

	cout << "Current temperature: " << temperatureFahrenheit
		 << "F" << endl;
	cout << "Windchill factor: " << windChillFactor << "F" << endl;

	return 0;
}

//Function with process in but nothing returned to user at this point 
void getData(int& wind, int& fahrenheit)
{
	cout << "Enter wind speed in miles per hour: ";
	cin >> wind;
	cout << endl;

	cout << "Enter temperature in degree Fahrenheit: ";
	cin >> fahrenheit;
	cout << endl;
}

//Function to do the math part of the problem. 
int calculateWindChillFactor(int wind, int fahrenheit)
{
	int w;

	w = static_cast<int>(35.74 + 0.6215 * fahrenheit - 
		                 35.75 * pow(wind, 0.16) 
						 + 0.4275 * fahrenheit *  pow(wind, 0.16));

	return w;
}