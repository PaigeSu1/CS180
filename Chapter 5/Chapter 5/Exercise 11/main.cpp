#include <iostream>
using namespace std;

int main()
{
          //Declare variables
    int previous1;
    int previous2;
    int current;
    int counter;
    int nthFibonacci;

    bool done = false;

    while (!done)
    {
        cout << "Enter the first two Fibonacci "
             << "numbers: ";  
        cin >> previous1 >> previous2; 
        cout << endl;

        if (previous1 < 0 || previous2 < 0)
            cout << "The number you entered are: " << previous1
                 << " and " << previous2 << "\n" 
                 << "Both numbers must be positive.\n " 
                 << "Re-enter both numbers!!!" << endl;
        else if ((previous1 > previous2) || previous1 < 0 || previous2 < 0)
            cout << "The number you entered are: " << previous1
                 << " and " << previous2 << "\n" 
        	     << "The first number must be less than or equal to " 
                 << "the second number. \n" 
                 << "Re-enter both numbers!!!" << endl;
        else
            done = true;
    }

    cout << "The first two numbers of the Fibonacci sequence "
         << " are: " << previous1 << " and " << previous2 << endl;

    done = false;

    while (!done)
    {
        cout << "Enter the position of the desired number in "
             << "the Fibonacci sequence: ";
       cin >> nthFibonacci;
       cout << endl;

        if (nthFibonacci <= 0)
            cout << "You must enter a positive integer. \n"
                 << "Re-enter the position of the desired number "
                 << "in the Fibonacci sequence: " << endl;
        else
            done = true;
    }

    if (nthFibonacci == 1) 
        current = previous1;
    else if (nthFibonacci == 2) 
             current = previous2;
    else 
    {
        counter = 3; 

        while (counter <= nthFibonacci)
        {
            current = previous2 + previous1; 
            previous1 = previous2; 
            previous2 = current;
            counter++; 
        }//end while
    }//end else

    cout << "The Fibonacci number at position " 
         << nthFibonacci << " is " << current 
         << endl; 

	return 0;
}
