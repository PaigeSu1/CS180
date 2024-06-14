#include <iostream>
#include <iomanip>
//Header files
using namespace std; 
//Var. that will not change
const double TAX = 0.14;
const double CLOTHES_AND_ACC = 0.10;
const double SCHOOL_SUPPLIES = 0.01;
const double SAVINGS_BONDS_PERCENT = 0.25;
const double PARENTS_BONDS_PERCENT_1 = 0.01;
const double PARENTS_BONDS_PERCENT_2 = 0.02;
const double PARENTS_BONDS_1 = 0.25;
const double PARENTS_BONDS_2 = 0.40;

int main()
{
    double payRate;
    double hoursWorkedWeek1, hoursWorkedWeek2, hoursWorkedWeek3,
           hoursWorkedWeek4, hoursWorkedWeek5;
    double totalHoursWorked;
    double totalIncome;
    double netIncome;             //Var. that are subject to be changed
    double costOfClothesAndAcc;
    double costOfSchoolSupplies;
    double netIncomeToBuySavingsBond;
    double costOfSavingsBonds;
    double savingsBondsFromParents;

    cout << fixed << showpoint << setprecision(2);
    //Ask the user for info
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
    //Part A
    totalIncome = totalHoursWorked * payRate;
    netIncome = totalIncome * (1 - TAX);
    costOfClothesAndAcc = netIncome * CLOTHES_AND_ACC;
    costOfSchoolSupplies = netIncome * SCHOOL_SUPPLIES;

    cout << "Enter the percent of net income spent to buy savings bonds: ";
    cin >> netIncomeToBuySavingsBond;
    cout << endl;
    //Part B amd C
    if (netIncomeToBuySavingsBond == 0)
    {
        costOfSavingsBonds = 0;
        savingsBondsFromParents = (netIncome - costOfClothesAndAcc 
                                   - costOfSchoolSupplies) * PARENTS_BONDS_PERCENT_1;
    }
    else if (netIncomeToBuySavingsBond / 100 <= SAVINGS_BONDS_PERCENT)
    {
        costOfSavingsBonds = netIncome * netIncomeToBuySavingsBond / 100;
        savingsBondsFromParents = costOfSavingsBonds * PARENTS_BONDS_1 +
                                 (netIncome - costOfClothesAndAcc 
                                   - costOfSchoolSupplies) 
                                     * PARENTS_BONDS_PERCENT_1;
    }
    else
    {
        costOfSavingsBonds = netIncome * netIncomeToBuySavingsBond / 100;
        savingsBondsFromParents = costOfSavingsBonds * PARENTS_BONDS_2 +
                                 (netIncome - costOfClothesAndAcc 
                                   - costOfSchoolSupplies) 
                                     * PARENTS_BONDS_PERCENT_2;
    }

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