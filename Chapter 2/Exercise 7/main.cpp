#include <iostream>

using namespace std; 

int main() 
{ 
	double number; 

	cout << "Enter a decimal number: ";
	cin >> number;
	cout << endl;

	cout << "The integer nearest to " << number << " = "
		 << static_cast<int>(number + 0.5) << endl;

	return 0;
}