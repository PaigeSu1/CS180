//Header files
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //Var.
    double coefficientOfXSquare; 
    double coefficientOfX;
    double constantTerm;

    double discriminant;
    double sqrtOfDiscriminant;

    double root1, root2;
    //How to make the decimal look pretty
    cout << fixed << showpoint << setprecision(2);
    //Ask user questions to use for program
    cout << "Enter the coefficient of x square: ";
    cin >> coefficientOfXSquare;
    cout << endl;

    cout << "Enter the coefficient of x: ";
    cin >> coefficientOfX;
    cout << endl;

    cout << "Enter the constant term: ";
    cin >> constantTerm;
    cout << endl;
    //Take users input and calculate the discriminant
    discriminant = coefficientOfX * coefficientOfX -
                   4 * coefficientOfXSquare * constantTerm;

    if (discriminant == 0)
    {
        cout << "The equation has repeated roots." << endl;
        cout << "Each root is equal to: "
         <<  (-coefficientOfX / 2 * coefficientOfXSquare) << endl;
    }
    else if (discriminant > 0)
    {
        cout << "The equation has distinct real roots." << endl;
        cout << "The roots are: ";

        sqrtOfDiscriminant = pow(discriminant, 0.5);

        root1 = (-coefficientOfX + sqrtOfDiscriminant) /
                2 * coefficientOfXSquare;
        root2 = (-coefficientOfX - sqrtOfDiscriminant) /
                2 * coefficientOfXSquare;
        cout << root1 << ", " << root2 << endl;
    }
    else
        cout << "The equation has complex roots" << endl;
    //Return the result to the user
	return 0;
}

