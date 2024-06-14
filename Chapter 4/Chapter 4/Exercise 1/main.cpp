//Program to ask user to input a number
//the output the number telling the user whether it is
// positive, negative, or zero
#include <iostream>
 //Header files
using namespace std;

int main() 
{
    //Initialize the Variable
	double num;

	cout << "Enter a number: ";
	cin >> num; //store the user input
	cout << endl;

    //tell the user what they had entered
	cout << "The number you entered is " << num 
         << ", and this is a ";
    //Statements of Conditions to tell if number is pos, neg or zero
	if (num == 0)
		cout << "zero." << endl;
	else if (num > 0)
		cout << "positive number." << endl;
	else
		cout << "negative number." << endl;

	return 0;
}