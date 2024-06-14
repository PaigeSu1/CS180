#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int firstNum, secondNum;
	int sumEven = 0;
	int sumSquareOdd = 0;

	char chCounter;

	int counter;
	int start;

		//Part a
	cout << "Enter two numbers." << endl;
	cout << "First number must be less than "
		 << "the second number you enter" << endl;
	cout << "Enter numbers: " << flush;
	cin >> firstNum >> secondNum;
	cout << endl;

		//Part b
	if (firstNum % 2 == 0)
		start = firstNum + 1;
	else
		start = firstNum;

	cout << "Odd integers between " << firstNum << " and "
		 << secondNum << " are: " << endl;

	for (counter = start; counter <= secondNum; counter = counter + 2)
		cout << counter << " ";
	cout << endl;

		//Part c
	if (firstNum % 2 == 0)
		start = firstNum;
	else
		start = firstNum + 1;

	for (counter = start; counter <= secondNum; counter = counter + 2)
		sumEven = sumEven + counter;

	cout << "Sum of even integers between " << firstNum << " and "
		 << secondNum << " = " << sumEven << endl;

		//Part d
	cout << "Number    Square of Number" << endl;
	
	for (counter = 1; counter <= 10; counter++)
		cout << setw(4) << counter << setw(18) 
			 << counter * counter << endl;
	cout << endl;
	
		//Part e
	if (firstNum % 2 == 0)
		start = firstNum + 1;
	else
		start = firstNum;

	for (counter = start; counter <= secondNum; counter = counter + 2)
		sumSquareOdd = sumSquareOdd + counter * counter;

	cout << "Sum of the squares of odd integers between " 
		 << firstNum << " and "
		 << secondNum << " = " << sumSquareOdd << endl;

		//Part f
	cout << "Upper case letters are: ";
	
	for (chCounter = 'A'; chCounter <= 'Z'; chCounter++)
		cout << chCounter << " ";
	cout << endl;

	return 0;
}
