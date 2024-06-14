  
#include <iostream>

using namespace std;

bool isLeapYear(int pDay);
int daysInMonth(int pMonth, int pYear);
int numberOfDays(int pDay, int pMonth, int pYear);

int main()
{
	int day;
	int month;
	int year;
	char ch;

	cout << "Enter date in the form: month-day-year: ";
	cin >> month >> ch >> day >> ch >> year;
	cout << endl;

	cout << "This is day number " 
		 << numberOfDays(day, month, year)
		 << " of the year " << year << endl;

	return 0;
}

bool isLeapYear(int pYear)
{
	if ((pYear % 4 == 0 && pYear % 100 != 0) || (pYear % 400 == 0))
		return true;
	else 
		return false;
}

int daysInMonth(int pMonth, int pYear)
{
	switch (pMonth)
	{
	case 1: 
    case 3: 
    case 5: 
    case 7: 
	case 8: 
    case 10: 
    case 12: 
        return 31;
	case 4: 
    case 6: 
    case 9: 
    case 11: 
        return 30;
	case 2: 
        if (isLeapYear(pYear))
            return 29;
        else 
            return 28;
    default:
        return -1;
	}
}

int numberOfDays(int pDay, int pMonth, int pYear)
{
	int sumDays = 0;
	int counter;

	for (counter = 1; counter < pMonth; counter++)
		sumDays = sumDays + daysInMonth(counter, pYear);

	sumDays = sumDays + pDay;

	return sumDays;
}