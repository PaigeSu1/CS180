//Header files    
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//Proto Function list rows and colums from 2 dimistional array
void getData(ifstream& inf, string n[], double runData[][8], int count);
void calculateAverage(double runData[][8], int count);
void print(string n[], double runData[][8], int count);
  
int main()
{
	string names[5];
    double runningData[5][8];

    ifstream inFile; //importing the file in
    inFile.open("ch8_Ex12Data.txt");

    if (!inFile) //if file cannot be found send an error messages
    {
        cout << "Cannot open the input file: ch8_Ex12Data.txt." << endl;
        cout << "Program terminates!" << endl;
        return 1;
    }
    //make the decimal point look pretty
    cout << fixed << showpoint << setprecision(2);

    //calling functions in the programs
    getData(inFile, names, runningData, 5);
    calculateAverage(runningData, 5);
    print(names, runningData, 5);

    inFile.close(); 
    //close the file when done

	return 0;
}

//Function of getting data out of file
void getData(ifstream& inf, string n[], double runData[][8], int count)
{
    for (int i = 0; i < count; i++)
    //i represent rows, j represent the coloums 
    {
        inf >> n[i];

        for (int j = 0; j < 7; j++)
            inf >> runData[i][j];

        runData[i][7] = 0.0;
    }
}

//function to find avg from days that have been ran
void calculateAverage(double runData[][8], int count)
{ 
    double sum;

    for (int i = 0; i < count; i++)
    {
        sum = 0.0;
        for (int j = 0; j < 7; j++)
            sum = sum + runData[i][j];
        runData[i][7] = sum / 7;
    }
}

//function to print the result back out to the user
void print(string n[], double runData[][8], int count)
{

    cout << left << setw(10) << "Name"
         << right << setw(8) << "Day 1"
         << setw(8) << "Day 2" 
         << setw(8) << "Day 3"
         << setw(8) << "Day 4"
         << setw(8) << "Day 5"
         << setw(8) << "Day 6"
         << setw(8) << "Day 7"
         << setw(10) << "Average" << endl;

    for (int i = 0; i < count; i++)
    {
        //formating the output of the data
        cout << left << setw(10) << n[i];
        cout << right;

        for (int j = 0; j < 7; j++)
            cout << setw(8) << runData[i][j];

        cout << setw(10) << runData[i][7] << endl;
    }

    cout << endl;
}
