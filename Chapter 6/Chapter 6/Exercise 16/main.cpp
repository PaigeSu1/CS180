//Header file  
#include <iostream>
using namespace std;

//ProtoType function 
void initialize(int& one, int& two, char& ch);
void getHoursRate(double& hrs, double& pRate);
double payCheck(double hrs, double pRate);
void printCheck(double hrs, double pRate, double pSalary);
void funcOne(int& pOne, int pTwo);
void nextChar(char& ch);

int main()
{
	int x, y;
	char z;
	double rate, hours;
	double amount;
	
	initialize(x, y, z);

	cout << "After initialization: x = " << x
		 << ", y = " << y << ", z = " << z << endl;

	getHoursRate(hours, rate);
	amount = payCheck(hours,rate);
	printCheck(hours,rate,amount);

	x = 35;
	y = 20;
	cout << "Before calling funcOne: x = " << x 
		 << ", y = " << y << endl;
	funcOne(x,y);
	cout << "After funcOne: x = " << x << endl;

	z = 'B';
	cout << "z = " << z << endl;
	nextChar(z);
	cout << "After nextChar: z = " << z << endl;

	return 0;
}

//Function
void initialize(int& one, int& two, char& ch)
{
	one = 0;
	two = 0;
	ch = ' ';
}

//function
void getHoursRate(double& hrs, double& pRate)
{
	cout << "Enter hours worked: ";
	cin >> hrs;
	cout << endl;

	cout << "Enter pay rate: ";
	cin >> pRate;
	cout << endl;
}

//function
double payCheck(double hrs, double prate)
{
	double amount;

	if (hrs <= 40)
		amount = hrs * prate;
	else
		amount = 40 * prate + 1.5 * (hrs - 40) * prate;

	return amount;
}

//function
void printCheck(double hrs, double pRate, double pSalary)
{
	cout << "Hours worked:       " << hrs << endl;
	cout << "Pay Rate:           $" << pRate << endl;
	cout << "This week's salary: $" << pSalary << endl;
}

//function
void funcOne(int& pOne, int pTwo)
{
	int num;

	cout << "Enter an integer: ";
	cin >> num;
	cout << endl;

	pOne = 2 * pOne + pTwo - num;
}

//function 
void nextChar(char& ch)
{
	ch = ch + 1;
}