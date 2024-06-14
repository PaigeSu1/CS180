//Header files 
#include <iostream>
using namespace std;
//Prototype finction "debug list"
int reverseDigit(int num); 

int main()
{
	int num;

	cout << "Enter an integer: ";
	cin >> num;
	cout << num << " with digits reversed = "
		 << reverseDigit(num)
		 << ", leading zeros if any are not shown." << endl;

	return 0;
}

//Function 
int reverseDigit(int num)
{
	int reverseNum = 0;
	bool isNegative = false; //false = 1 
	
	if (num < 0)
	{
		num = -num;
		isNegative = true; //true = 0 
	}

	while (num > 0)
	{
		reverseNum = reverseNum * 10 + num % 10;
		num = num / 10;
	}

	if (isNegative)
		reverseNum = -reverseNum;

	return reverseNum;
}