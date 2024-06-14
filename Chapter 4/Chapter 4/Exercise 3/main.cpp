//Ask user for num between 0-35
//if num is <=9 print the number out
//else output A for 10 and so on
//ACSll code idea
#include <iostream>
//Header file
using namespace std;
  
int main()
{
	int num;
    //ask user for number
	cout << "Enter an integer between 0 and 35: ";
	cin >> num; //store user input
	cout << endl;
    //tell user what they entered/
	cout << "The number you entered is: " << num << endl;

	cout << "Output: ";
    //check the users num.
	if (num <= 9)
		cout << num << endl;
	else
		cout << static_cast<char>(num + 55) << endl;
		
	return 0;
}
	