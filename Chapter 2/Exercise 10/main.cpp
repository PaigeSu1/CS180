#include <iostream>
 
using namespace std;
 
int main() 
{
	double dec1, dec2, dec3, dec4, dec5; 

	int num;

	cout << "Enter five decimal numbers: ";
	cin >> dec1 >> dec2 >> dec3 >> dec4 >> dec5;

	num = static_cast<int>(dec1 + dec2 + dec3 + dec4 + dec5 + 0.5);

	cout << "The sum of the numbers to the nearest integer = " 
		 << num << endl;

	return 0; 
}