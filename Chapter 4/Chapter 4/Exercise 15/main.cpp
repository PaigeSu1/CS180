#include <iostream>
#include <iomanip>
#include <fstream>
 
using namespace std;

const double SERVICE_CHARGE_INSUFFICIENT_FUND = 25.00;
const double SERVICE_CHARGES_OVER_300 = 0.04;

int main()
{
    double accountBalance;
    double amountWithdrawn;
    double serviceCharges;

    char response;

    ifstream inFile;
    ofstream outFile;

    inFile.open("Ch4_Ex15_Data.txt");

    if (!inFile)
    {
        cout << "Input file does not exist. Program terminates!!" << endl;
        return 1;
    }

    inFile >> accountBalance;

    cout << "Account balance before withdrawal: $" << accountBalance << endl;

    inFile.close();

    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << "Enter amount to be withdrawn: ";
    cin >> amountWithdrawn;
    cout << endl;

    if (amountWithdrawn > 500)
        cout << "The maximum amount that can be withdrawn is $500." << endl;
    else if (accountBalance <= 0) 
        cout << "Account balance is <= 0. You cannot withdraw any money. " << endl;
    else 
    {
        if (amountWithdrawn > accountBalance)
        {
            cout << "Insufficient balance. If you withdraw, services charges " 
                 << "will be $25.00. " << endl
                 << "Enter Y/y(to withdraw); N/n (to quit): ";
            cin >> response;
            cout << endl;

            if (response == 'Y' || response == 'y') 
            {
                serviceCharges = SERVICE_CHARGE_INSUFFICIENT_FUND;

                if (amountWithdrawn > 300)
                    serviceCharges = serviceCharges +
                                     (amountWithdrawn - 300) * SERVICE_CHARGES_OVER_300;
            }

            accountBalance = accountBalance - amountWithdrawn 
                             - serviceCharges;
            cout << "Collect your money. " << endl;
        }
        else 
        {
            if (amountWithdrawn > 300)
                serviceCharges = (amountWithdrawn - 300) * SERVICE_CHARGES_OVER_300;
            else 
                serviceCharges = 0;

            accountBalance = accountBalance - amountWithdrawn 
                            - serviceCharges;
            cout << "Collect your money." << endl;
        }

        cout << "Account balance after withdrawal: $" << accountBalance << endl;
        cout << "Service charges: $" << serviceCharges << endl;

        outFile.open("Ch4_Ex15_Output.txt");
        outFile << fixed << showpoint << setprecision(2) << accountBalance << endl;
        outFile.close();
    }

	return 0;
}