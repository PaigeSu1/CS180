#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std; 

const double PI = 3.1416;

int main()
{
	ifstream inFile;        //What is means to import a file 
	ofstream outFile;  //These files will apper into the file manger that is found within the computer
                        // Meaning that it will not show anything within the coding window 
                        // in addtion to compareing the different into importing files into C lion 
                        //This make a file to show the differnce of what is being created to the from the program
                        //Therefore, to test this program out correctly deleate the files right after they are made 

    string firstName, lastName, department;
    double grossSalary, bouns, taxRate;

    double distaceTraveled, travelTime;
    int numOfCoffeeCupsSold;
    double coffeeCupCost;

	inFile.open("inData.txt");      //Is this something with how the files are imported
	outFile.open("outData.txt");    //Why dose this thing be super weird for this part

    outFile << fixed << showpoint << setprecision(2);

	inFile >> firstName >> lastName >> department;
    inFile >> grossSalary >> bouns >> taxRate;

    outFile << "Name: " <<  firstName << " " << lastName << ", "
            << "Department: " << department << endl;
    outFile << "Monthly Gross Salary: $" << grossSalary
            << ", Monthly Bonus: " << bouns << "%, Taxes: "
            << taxRate << "%" << endl
            << "Paycheck: $"
            << grossSalary * (1 + bouns / 100) * (1 - taxRate / 100)
            << endl << endl;

	inFile >> distaceTraveled >> travelTime;

    outFile << "Distance Traveled: " << distaceTraveled
            << " miles, Traveling Time: " << 9.00 << " hours" << endl;
    outFile << "Average Speed: " << distaceTraveled / travelTime
            << " miles per hour" << endl << endl;

    inFile >> numOfCoffeeCupsSold >> coffeeCupCost;

    outFile << "Number of Coffee Cups Sold: " << numOfCoffeeCupsSold
            << ", Cost: $" << coffeeCupCost << " per cup" << endl;
    outFile << "Sales Amount = $" << numOfCoffeeCupsSold * coffeeCupCost
            << endl;

    inFile.close();
    outFile.close();

	return 0;
}