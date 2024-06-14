//header files 
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

//global variable that dose not change 20 student in 1 class 
const int NO_OF_STUDENTS = 20;

//struct data type
struct studentType
{
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
}; //sad face

//proto type list 
void getData(ifstream& inFile, studentType sList[], int listSize);
void calculateGrade(studentType sList[], int listSize);
int highestScore(const studentType sList[], int listSize);
void printResult(ofstream& outFile, const studentType sList[], int listSize);

int main()
{
    ifstream inData;
    ofstream outData;
    //allow the struct to be used within the program 
    studentType studentList[NO_OF_STUDENTS];

    //how to open and close when reading the files
    inData.open("Ch9_Ex2Data.txt");
    if (!inData)
    {
        cout << "The input file does not exist. Program terminates!"
             << endl;
        return 1;
    }

    outData.open("Ch9_Ex2Out.txt");
    if (!outData)
    {
        cout << "Cannot open the output file. Program terminates!" 
             << endl;
        return 1;
    }

    //functions call 
    getData(inData, studentList, NO_OF_STUDENTS);
    calculateGrade(studentList, NO_OF_STUDENTS);
    printResult(outData, studentList, NO_OF_STUDENTS);

    return 0;
}

void getData(ifstream& inFile, studentType sList[], int listSize)
{
    //go throught the file data given and sort by firstname, last and then test score
    for (int i = 0; i < listSize; i++)
        inFile >> sList[i].studentFName >> sList[i].studentLName
               >> sList[i].testScore;
}

void calculateGrade(studentType sList[], int listSize)
{
    //find the test score from the list and put a corrponding letter grade to it
    for (int i = 0; i < listSize; i++)
    {
        switch (sList[i].testScore / 10)
        {
        case 10: 
        case 9: 
            sList[i].grade = 'A';
            break;
        case 8: 
            sList[i].grade = 'B';
            break;
        case 7: 
            sList[i].grade = 'C';
            break;
        case 6: 
            sList[i].grade = 'D';
            break;
        case 5: 
        case 4: 
        case 3: 
        case 2: 
        case 1: 
        case 0: 
            sList[i].grade = 'F';
        }
    }
}

int highestScore(const studentType sList[], int listSize)
{
    //go through the list and find which student has the higest test score
    int hScore = sList[0].testScore;

    for (int i = 1; i < listSize; i++)
        if (hScore < sList[i].testScore)
            hScore = sList[i].testScore;

    return hScore;
}

void printResult(ofstream& outFile, const studentType sList[], 
				 int listSize)
{
    int maxScore = highestScore(sList, listSize);
    int i;
    //making the output format to look pretty 
    outFile << setw(15) << "Student Name           "
            << setw(10) << "Test Score"
            << setw(7) << "Grade" << endl;

    for (i = 0; i < listSize; i++)
        outFile << left << setw(25)
                << sList[i].studentLName + ", " + sList[i].studentFName
                << right << " " << setw(5) << sList[i].testScore
                << setw(6) << " " << sList[i].grade << endl;
    //have the file data be able to show in the terminal 
    outFile << endl << "Highest Test Score: " << maxScore << endl;
    outFile << "Students having the highest test score:" << endl;

    //prints the student info if they have the highest test score 
    for (i = 0; i < listSize; i++)
        if (sList[i].testScore == maxScore)
            outFile << sList[i].studentLName + ",  " + sList[i].studentFName
                    << endl;
}
