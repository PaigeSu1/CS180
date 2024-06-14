#include <iostream>
#include <fstream>
#include <string> 
#include <iomanip> 

using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;

	string firstName;
    string lastName;
    double currentSalary;
    double increaseRate;
    double updatedSalary;

	inFile.open("Ch3_Ex5Data.txt");
	outFile.open("Ch3_Ex5Output.dat");

    outFile << fixed << showpoint << setprecision(2);

	inFile >> lastName >> firstName;
    inFile >> currentSalary >> increaseRate;

    updatedSalary = currentSalary * (1 + increaseRate / 100);

    outFile << firstName << " " << lastName 
            << " " << updatedSalary << endl;

	inFile >> lastName >> firstName;
    inFile >> currentSalary >> increaseRate;

    updatedSalary = currentSalary * (1 + increaseRate / 100);

    outFile << firstName << " " << lastName 
            << " " << updatedSalary << endl;

    inFile >> lastName >> firstName;
    inFile >> currentSalary >> increaseRate;

    updatedSalary = currentSalary * (1 + increaseRate / 100);

    outFile << firstName << " " << lastName 
            << " " << updatedSalary << endl;

	return 0;
}