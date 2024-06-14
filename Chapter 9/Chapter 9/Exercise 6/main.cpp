//header files    
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string> 
using namespace std;

struct letterType
{
    char letter;
    int count;
};//sad face
//proto list 
void initialize(letterType lList[], int listSize);
void openFile(ifstream& inF, ofstream& outF);
void count(ifstream& inF, letterType lList[], int listSize);
void printResult(ofstream& outF, letterType lList[], int listSize);

int main()
{
    letterType letterList[52];
    //how to use the data struct within the whole program 
    ifstream inFile;
    ofstream outFile;

    //open and close the files 
    openFile(inFile, outFile);

    if (!inFile || !outFile)
        return 1;
        //if file cannot be opened 

    //function call list 
    initialize(letterList, 52);
    count(inFile, letterList, 52);
    printResult(outFile, letterList, 52);

    return 0;
}

void initialize(letterType lList[], int listSize)
{
    int i; //counter variable 

    for (i = 0; i < 26; i++) //first half of list 
    {
        lList[i].letter = static_cast<char> (i + 65);
        lList[i].count = 0;
    }

    for (i = 26; i < 52; i++) //second half of list 
    {
        lList[i].letter = static_cast<char> (i + 71);
        lList[i].count = 0;
    }
}

void openFile(ifstream& inF, ofstream& outF)
{
    //opening the file as a fucntion on tis own 
    //instead of doing this all inside the main
    string fileName;

    cout << "Enter the name of the input file: ";
    cin >> fileName;
    cout << endl;

    inF.open(fileName.c_str());

    if (!inF)
    {
        cout << "The input file does not exist. Program terminates!"
             << endl;
        return;
    }

    cout << "Enter the name of the output file: ";
    cin >> fileName;
    cout << endl;

    outF.open(fileName.c_str());
    if (!outF)
    {
        cout << "Cannot open the output file. Program terminates!"
             << endl;
        return;
    }
}

void count(ifstream& inF, letterType lList[], int listSize)
{
    char ch;
    int index;

    inF >> ch;
    //count the index size of the list 
    while (inF)
    {
        index = static_cast<int>(ch);

        if ('A' <= ch && ch <= 'Z')
            lList[index - 65].count++;
        else
            if ('a' <= ch && ch <= 'z')
                lList[index - 71].count++;

        inF >> ch;
    }
}

void printResult(ofstream& outF, letterType lList[], int listSize)
{
    int i;
    int sum = 0;
    double percentAge = 0;
    //method to return the result to the user

    for (i = 0; i < 52; i++)
        sum += lList[i].count;

    outF << fixed << showpoint << setprecision(2) << endl;

    outF << "Letter  Count   Pecentage of Occurrence" << endl;

    for (i = 0; i < 52; i++)
    {
        outF << "  " << lList[i].letter << "     "
             << setw(5) << lList[i].count;

        if (sum != 0)
            percentAge = static_cast<double>(lList[i].count) /
                         static_cast<double>(sum) * 100;

        outF << setw(15) << percentAge << "%" << endl;
    }

    outF << endl;
}