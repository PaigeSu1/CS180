#include <iostream>
#include <iomanip>

using namespace std; 

const double SERV_BONUS_1 = 10.00;
const double SERV_BONUS_2 = 20.00;
 
const double ADDITIONAL_BONUS_RATE_1 = 0.03;
const double ADDITIONAL_BONUS_RATE_2 = 0.06;

int main()
{
    double baseSalary;
    double bonus;
    double additionalBonus;
    double totalSale;

    int noOfServiceYears;

    double payCheck;

    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << "Enter base salary: ";
    cin >> baseSalary;
    cout << endl;

    cout << "Enter number of years the employee is with the company: ";
    cin >> noOfServiceYears;
    cout << endl;

    if (noOfServiceYears <= 5)
        bonus = SERV_BONUS_1 * noOfServiceYears;
    else
        bonus = SERV_BONUS_2 * noOfServiceYears;

    cout << "Enter total sale amount for the month: ";
    cin >> totalSale;
    cout << endl;

    if (totalSale < 5000)
        additionalBonus = 0;
    else if (5000 <= totalSale && totalSale < 10000)
        additionalBonus = totalSale * ADDITIONAL_BONUS_RATE_1;
    else
        additionalBonus = totalSale * ADDITIONAL_BONUS_RATE_2;

    payCheck = baseSalary + bonus + additionalBonus;

    cout << "This month salary: $" << payCheck << endl;

    return 0;
}

