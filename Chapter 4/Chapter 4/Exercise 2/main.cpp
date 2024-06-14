//Program to put numbers in order from a user
#include <iostream>
 //header files
using namespace std;

int main()
{
    //var. that will be filled in with user input
    double num1, num2, num3; 
    double temp;
    //Ask the user for its input
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << endl;

    //Check the conditions using a temp var. because it likely to move
    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    } 

    //Now num1 is less than or equal to num2

    cout << "The numbers in the ascending order are: ";
    //Find the order of the rest of the numbers
    if (num3 <= num1) {
        cout << num3 << " " << num1 << " " << num2 << endl;
    }else if (num1 <= num3 && num3 <=  num2) {
        cout << num1 << " " << num3 << " " << num2 << endl;
    }else {
        cout << num1 << " " << num2 << " " << num3 << endl;
    }
	return 0;
}
	