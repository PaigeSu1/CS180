//Header files   
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//Prototype function "Debug list"
double periodicPayment(double L, double r, int m, int t);

double unpaidBalance(double R, double r, int m, int t, int k);

int main()
{
	double loanAmount, interestRate; 
    int numOfPayPerYear, loanYears;

    int numOfPaymentsMade;

    char response;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter (Y/y) to find the periodic payment and unpaid "
         << "balance after certain payments: ";
    cin >> response;
    cout << endl;

    while (response == 'Y' || response == 'y')
    {
        cout << "Enter the loan amount: ";
        cin >> loanAmount;
        cout << endl;

        cout << "Enter the interest rate per year as a percentage: ";
        cin >> interestRate;
        cout << endl;

        cout << "Enter the number of payments per year: ";
        cin >> numOfPayPerYear;
        cout << endl;

        cout << "Enter the number of years for the loan: ";
        cin >> loanYears;
        cout << endl;

        double perioPayment = periodicPayment(loanAmount, interestRate, 
                                             numOfPayPerYear, loanYears);
        cout << "The periodic payment is: "
             << perioPayment << endl;
   
        cout << "Enter the number of payments made: ";
        cin >> numOfPaymentsMade;
        cout << endl;

        cout << "The unpaid balance after " << numOfPaymentsMade
             << " payment(s) is : " 
             << unpaidBalance(perioPayment, interestRate, 
                          numOfPayPerYear, loanYears, numOfPaymentsMade)
             << endl;

        cout << "Enter (Y/y) to find the periodic payment and unpaid "
             << "balance after certain payments: ";
        cin >> response;
        cout << endl;
    }

	return 0;
}

//Function
double periodicPayment(double L, double r, int m, int t)
{
    double i = r / ( 100 * m);

	return (L * i / ( 1 - pow(1 + i, -m * t)));
}

//Function
double unpaidBalance(double R, double r, int m,
                     int t, int k)
{
	double i = r / ( 100 * m);

    return R * ((1 - pow(1 + i, -(m * t - k))) / i);
}