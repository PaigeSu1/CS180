  
#include <iostream>
#include <iomanip>

using namespace std;
  
int main ()
{
	double loanAmount;
	double interestRate;
    double interestRatePerMonth;
	double monthlyPayment;
    double paymentPrincipal;

    double totalInterestAmount = 0.0;
    double interestAmountForTheMonth;

    double lastPayment = 0.0;
    double minimumMonthlyPayment;

	int months;

	cout << fixed << showpoint;
	cout << setprecision(2);

	cout << "Enter the loan amount: ";
	cin >> loanAmount;
	cout << endl;

    cout << "Enter the interest rate per year: ";
    cin >> interestRate;
    cout << endl;

    interestRatePerMonth = (interestRate / 100) / 12;

    minimumMonthlyPayment = loanAmount * interestRatePerMonth;

    cout << "The monthly payment must be more than : "
         << minimumMonthlyPayment << endl;

    cout << "Enter monthly payment: ";
    cin >> monthlyPayment;
    cout << endl;

    months = 0;

    while (loanAmount > 0)
    {
        interestAmountForTheMonth = loanAmount * interestRatePerMonth;
        paymentPrincipal = monthlyPayment - interestAmountForTheMonth;

        totalInterestAmount = totalInterestAmount + interestAmountForTheMonth;

        if (loanAmount + interestAmountForTheMonth < monthlyPayment)
            lastPayment = loanAmount  + interestAmountForTheMonth;
        
        loanAmount = loanAmount - paymentPrincipal;

        months++;
    }

    cout << "It will take " << months << " months to repay the loan."
         << endl;
    cout << "The last payment on the loan is: " << lastPayment << endl;

    cout << "The total interest paid is: " << totalInterestAmount << endl;

	return 0;
}