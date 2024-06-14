#include <iostream>
#include <iomanip>

using namespace std;

const double CREDIT_BOUNS = 10;

int main()
{
    double billingAmount;
    double payment;
    double credit;
    double penalty;
    double balance;

    double paymentPercent;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the billing amount: ";
    cin >> billingAmount;
    cout << endl;

    cout << "Enter the payment amount: ";
    cin >> payment;
    cout << endl;

    balance = billingAmount - payment;

    if (billingAmount != 0.0)
        paymentPercent = payment / billingAmount;
    else
        paymentPercent = 0.0;

    if (paymentPercent == 1.0)
    {
        credit = billingAmount * 0.01;

        if (credit > CREDIT_BOUNS)
            credit = CREDIT_BOUNS;

        cout << "Thank you for paying the full amount." << endl;
        cout << "You will receive $" << credit << " credit on your next bill." << endl;
    }
    else
    {
        if (paymentPercent >= 0.50)
            penalty = balance * 0.05;
        else if (paymentPercent >= 0.20 && paymentPercent < 0.50)
            penalty = balance * 0.10;
        else
            penalty = balance * 0.20;

        balance = balance + penalty;

        cout << "The penalty added to the next bill is: $" << penalty << endl;
        cout << "The unpaid balance including the penalty is: $" << balance << endl;
    }

    return 0;
}