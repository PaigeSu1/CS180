#include <iostream>
 
using namespace std;
 
const double TAX = 0.14;
const double CLOTHES_AND_ACC = 0.10;
const double SCHOOL_SUPPLIES = 0.01; 
const double SAVINGS_BONDS = 0.25;
const double PARENTS_BONDS = 0.50;
  
int main()
{
    double payRate;
    double hoursWorkedWeek1, hoursWorkedWeek2, hoursWorkedWeek3,
           hoursWorkedWeek4, hoursWorkedWeek5;
    double totalHoursWorked;
    double totalIncome;
    double netIncome;
    double costOfClothesAndAcc;
    double costOfSchoolSupplies;
    double costOfSavingsBonds;
    double savingsBondsFromParents;

	cout << "Enter the per hour pay rate: ";
	cin >> payRate;
	cout << endl;

	cout << "Enter the number of hours worked for week 1: ";
	cin >> hoursWorkedWeek1;
	cout << endl;

	cout << "Enter the number of hours worked for week 2: ";
	cin >> hoursWorkedWeek2;
	cout << endl;

	cout << "Enter the number of hours worked for week 3: ";
	cin >> hoursWorkedWeek3;
	cout << endl;

    cout << "Enter the number of hours worked for week 4: ";
	cin >> hoursWorkedWeek4;
	cout << endl;

    cout << "Enter the number of hours worked for week 5: ";
	cin >> hoursWorkedWeek5;
	cout << endl;

    totalHoursWorked = hoursWorkedWeek1 + hoursWorkedWeek2 
                      + hoursWorkedWeek3 + hoursWorkedWeek4
                      + hoursWorkedWeek5;

    totalIncome = totalHoursWorked * payRate;
    netIncome = totalIncome * (1 - TAX);
    costOfClothesAndAcc = netIncome * CLOTHES_AND_ACC;
    costOfSchoolSupplies = netIncome * SCHOOL_SUPPLIES;
    costOfSavingsBonds = (netIncome - costOfClothesAndAcc - costOfSchoolSupplies) 
                         * SAVINGS_BONDS;
    savingsBondsFromParents = costOfSavingsBonds * PARENTS_BONDS;

    cout << "Total Income before tax: $ " << totalIncome << endl;
    cout << "Net Income: $ " << netIncome << endl;
    cout << "Money spent on clothes and other accessories: $ "
         << costOfClothesAndAcc << endl;
    cout << "Money spent on school supplies: $ "
         << costOfSchoolSupplies << endl;
    cout << "Money spent to buy savings bonds: $ "
         << costOfSavingsBonds << endl;
    cout << "Money spent by parents to buy additional savings bonds: $ "
         << savingsBondsFromParents << endl;
    
	return 0;
}
