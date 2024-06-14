#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

const int ROWS = 10;
const int COLS = 3;

void getData(ifstream& inf, string n[], double emp[][COLS]);
void calculateSalary(double emp[][COLS]);
void printEmpData(string n[], double emp[][COLS]);
double calculateAvgSalary(double emp[][COLS]);
void printEmpSalaryGreaterThanAvg(string n[], double emp[][COLS]);

int main()
{
	string names[ROWS];
    double empData[ROWS][COLS];

    ifstream infile;

    infile.open("ch8_Ex17Data.txt");
    if (!infile)
    {
        cout << "Cannot open input file. The program terminates." << endl;
        return 1;
    }

    cout << fixed << showpoint << setprecision(2);

    getData(infile, names, empData);
    calculateSalary(empData);
    printEmpData(names, empData);
    printEmpSalaryGreaterThanAvg(names, empData);

	return 0;
}

void getData(ifstream& inf, string n[], double emp[][COLS])
{
   for (int i = 0; i < ROWS; i++)
   {
       inf >> n[i];
       for (int j = 0; j < COLS - 1; j++)
        inf >> emp[i][j];
   }
}

void calculateSalary(double emp[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        if (emp[i][0] < 40)
            emp[i][2] = emp[i][0] * emp[i][1];
        else
            emp[i][2] = 40 * emp[i][1] +  1.5 * (emp[i][0] - 40) * emp[i][1];
    }
}
                   
void printEmpData(string n[], double emp[][COLS])
{
    cout << left << setw(8) << "Name"
         << right << setw(10) << "Hrs Worked"
         << setw(10) << "Pay Rate"
         << setw(10) << "Salary" << endl;

    for (int i = 0; i < ROWS; i++)
    {
        cout << left << setw(8) << n[i];
        cout << right;
        for (int j = 0; j < COLS; j++)
            cout << setw(10) << emp[i][j];
        cout << endl;
    }

    cout << endl;
}

double calculateAvgSalary(double emp[][COLS])
{
    double sum = 0.0;

    for (int i = 0; i < ROWS; i++)
        sum = sum + emp[i][2];

    return sum / ROWS;
}

void printEmpSalaryGreaterThanAvg(string n[], double emp[][COLS])
{
    double avgSalary;

    avgSalary = calculateAvgSalary(emp);

    cout << "Average Salary: $" << avgSalary << endl << endl;
    /* Employees whose salaries are greater than or equal to the average salary */
    cout << "Salary Greater than Avg: " << endl;

    for (int i = 0; i < ROWS; i++)
        if (emp[i][2] >= avgSalary)
            cout << n[i] << " ";
    cout << endl;
}