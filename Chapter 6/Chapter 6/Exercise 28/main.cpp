    
#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

const double SMALL_CUP_COST = 1.75;
const double MEDIUM_CUP_COST = 1.90;
const double LARGE_CUP_COST = 2.00;

const int SMALL_CUP_SIZE = 9;
const int MEDIUM_CUP_SIZE = 12;
const int LARGE_CUP_SIZE = 15;

void menu();
void showCupCount(int s, int m, int l);
void showMoneyMade(double m);
void showCoffeeSold(int c);

void sellCoffee(int& sCupCount, int &mCupCount, int& lCupCount,
				int&  totalCoffeeSold, double& tMoneyMade);

int main()
{
    int smallCupCount = 0;
	int mediumCupCount = 0;
	int largeCupCount = 0;

	int totalAmountOfCoffeeSold = 0;

	double totalMoneyMade = 0.0;

	int choice;

	cout << fixed << showpoint << setprecision(2);

    menu();
	cin >> choice;
	cout << endl;

	while (choice != 9)
	{
		switch (choice)
		{
		case 1: 
			sellCoffee(smallCupCount, mediumCupCount, largeCupCount,
				       totalAmountOfCoffeeSold, totalMoneyMade);
			break;
		case 2:
			showMoneyMade(totalMoneyMade);
			break;
		case 3:
			showCoffeeSold(totalAmountOfCoffeeSold);
			break;
		case 4: 
			showCupCount(smallCupCount, mediumCupCount, largeCupCount);
			break;
		case 5:
			showCupCount(smallCupCount, mediumCupCount, largeCupCount);
			showCoffeeSold(totalAmountOfCoffeeSold);
			showMoneyMade(totalMoneyMade);
			break;
		default:
			cout << "Invalid choice." << endl;
		}

		menu();
        cin >> choice;
        cout << endl;
	}
	
	return 0;
}

void menu()
{
	cout <<"1: Enter 1 to order coffee." << endl;
	cout <<"2: Enter 2 to check the total money made up to this time." << endl;
	cout <<"3: Enter 3 to check the total amount of coffee sold up to this time." << endl;
	cout <<"4: Enter 4 to check the number of cups of coffee of each size sold." << endl;
	cout <<"5: Enter 5 to print the data." << endl;
	cout <<"9: Enter 9 to exit the program." << endl;
}

void showCupCount(int s, int m, int l)
{
	cout << "Small cup count: " << s << endl;
	cout << "Medium cup count: " << m << endl;
	cout << "Large cup count: " << l << endl;
}

void showMoneyMade(double m)
{ 
	cout << "Total money made: $" << m << endl;
}

void showCoffeeSold(int c)
{
	cout << "Total amount of coffee sold: " << c << "oz" << endl;
}

void coffeeMenu()
{
	cout <<"1: Enter 1 to buy coffee in a small cup size (9 oz)" << endl;
	cout <<"2: Enter 2 to buy coffee in a medium cup size (12 oz)" << endl;
	cout <<"3: Enter 3 to buy coffee in a large cup size (15 oz)" << endl;
	cout <<"9: Enter 9 to exit." << endl;
}

void sellCoffee(int& sCupCount, int &mCupCount, int& lCupCount,
				int& tCoffeeSold, double& tMoneyMade) 
{
	int cupSize;
	int numOfCupsOrdered;

	double bill = 0;

	coffeeMenu();
	cin >> cupSize;
	cout << endl; 

	while (cupSize != 9)
	{
		switch (cupSize)
	    {
		case 1:
			cout << "Enter the number of cups: ";
			cin >> numOfCupsOrdered;
			cout << endl;

			sCupCount = sCupCount + numOfCupsOrdered;
			bill = bill + numOfCupsOrdered * SMALL_CUP_COST;
			tCoffeeSold = tCoffeeSold + numOfCupsOrdered * SMALL_CUP_SIZE;
			break;
		case 2:
			cout << "Enter the number of cups: ";
			cin >> numOfCupsOrdered;
			cout << endl;

			mCupCount = mCupCount + numOfCupsOrdered;
			bill = bill + numOfCupsOrdered * MEDIUM_CUP_COST;
			tCoffeeSold = tCoffeeSold + numOfCupsOrdered * MEDIUM_CUP_SIZE;
			break;
		case 3:
			cout << "Enter the number of cups: ";
			cin >> numOfCupsOrdered;
			cout << endl;

			lCupCount = lCupCount + numOfCupsOrdered;
			bill = bill + numOfCupsOrdered * LARGE_CUP_COST;
			tCoffeeSold = tCoffeeSold + numOfCupsOrdered * LARGE_CUP_SIZE;
			break;
		default:
			cout << "Invalid choice." << endl;
	    }

	    coffeeMenu();
	    cin >> cupSize;
	    cout << endl; 
    }

	cout << "Please pay $" << bill << endl;

	tMoneyMade = tMoneyMade + bill;
}