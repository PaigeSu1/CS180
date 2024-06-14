//Header files    
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//ProtoType Functions 
void func1();
void func2(int& a, int& b, double& c);

int main()
{
    int num1, num2;
    double num3;

    int choice;

    cout << fixed << showpoint << setprecision(2);

    do
    {
        func1(); //function call 
        cin >> choice;
        cout << endl;

        if (choice == 1)
        {
            func2(num1, num2, num3); //function call 
            cout << num1 << ", " << num2 << ", " << num3 << endl;
        }
    }
    while (choice != 99);

    return 0;
 }

//function
void func1()
{
    cout << "To run the program, enter 1." << endl;
    cout << "To exit the pogram, enter 99." << endl;
    cout << "Enter 1 or 99: "; 
}

//function 
void func2(int& a, int& b, double& c)
{
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << endl;

    if (a != 0 && b != 0)
    {
        if (a >= b)
            c = pow(a, b + 0.0);
        else
            c = pow(b, a + 0.0); 
    }
    else if (a != 0)
        c = sqrt(fabs(a + 0.0));
    else if (b != 0)
        c = sqrt(fabs(b + 0.0));
    else 
        c = 0;
}