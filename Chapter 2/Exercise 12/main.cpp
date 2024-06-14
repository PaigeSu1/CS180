#include <iostream>  

using namespace std; 

const int SECONDS_PER_HOUR = 3600;
const int SECONDS_PER_MINUTE = 60; 

int main() 
{
	int hours; 
	int minutes;
	int seconds;

	cout << "Enter the elapsed time in seconds: ";
	cin >> seconds; 
	cout << endl;

	cout << "The elapsed time in seconds = " << seconds << endl;

	hours = seconds / SECONDS_PER_HOUR;
	seconds = seconds % SECONDS_PER_HOUR;
	minutes = seconds / SECONDS_PER_MINUTE;
	seconds = seconds % SECONDS_PER_MINUTE;

	cout << "The equivalent time in hours:minutes:seconds = "
		 << hours << ":" << minutes << ":" << seconds << endl;

	return 0;
}