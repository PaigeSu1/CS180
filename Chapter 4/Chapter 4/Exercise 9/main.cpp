//Header files
#include <iostream>
#include <iomanip>
using namespace std;
 //Same as number 8 but there is an expectation
 //Able to handle float numbers

int main() 
{
    double num1, num2;
    char opr;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << endl;

    cout << "Enter operator: + (addition), - (subtraction),"
         << " * (multiplication), / (division): ";
    cin >> opr;
    cout << endl;

    cout << num1 << " " << opr << " " << num2 << " = ";

    switch (opr)
    {
	case '+': 
        cout << num1 + num2 << endl;
        break;
	case '-': 
        cout << num1 - num2 << endl;
        break;
	case '*': 
        cout << num1 * num2 << endl;
        break;
	case '/': 
        if (num2 != 0)
            cout << num1 / num2 << endl;
        else
            cout << "ERROR \nCannot divide by zero" << endl;
        break;
	default:  
        cout << "Illegal operation" << endl;
	}

	return 0;
}