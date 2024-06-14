/*
//program 1 for lab 7
#include<iostream>
#include<string>
#include<iomanip>
using namespace std; 

struct computerType
{
    string manufacturer;
    string modelType;
    string processorType;
    int ram;
    int hardDriveSize;
    int yearBuilt;
    double price;
}; //sad face

int main()
{
    computerType computer;

    cout << fixed << showpoint << setprecision(2);

    //strings are being entered in 
    cout << "Enter the name of the manufacturer: ";
    getline(cin, computer.manufacturer);
    cout << endl;

    cout << "Enter the ModelType : " ;
    getline(cin, computer.manufacturer);
    cout << endl;

    cout << "Enter the processorType: " ;
    getline(cin, computer.processorType);
    cout << endl;

    //ints are being enterd in 
    cout << "Enter the size of RAM (in GB): ";
    cin >> computer.ram;
    cout << endl;

    cout << "Enter the size of hard drive (in GB): ";
    cin >> computer.hardDriveSize;
    cout << endl;

    cout << "Enter the year the computer was built: ";
    cin >> computer.yearBuilt;
    cout << endl;

    cout << "Enter the price: ";
    cin >> computer.price;
    cout << endl;

    //how to print each type out 
    cout << "Manufacturer: " << computer.manufacturer << endl;
    cout << "Model: " << computer.modelType << endl;
    cout << "Processor: " << computer.processorType << endl;
    cout << "Ram: " << computer.ram << endl;
    cout << "Hard Drive Size: " << computer.hardDriveSize << endl;
    cout << "Year Built: " << computer.yearBuilt << endl;
    cout << "Price: $" << computer.price << endl;

    return 0; 
}
*/

//*********************************************************************************************************************88

//program 2 lab 7 
/*
#include<iostream>
#include<string>
#include<iomanip>
#include <fstream>
using namespace std; 

//things that do not change 
const int NO_OF_STUDENTS = 20;

struct studentType 
{
    //string
    string studentFName;
    string studentLName;
    //int
    int testScore; //between (0-100)
    char grade; 
};

int main()
{
    //open the file 
    ifstream inData;
    ofstream outData;
    //the array that is storing the students information 
    studentType studentList[NO_OF_STUDENTS];

    //call the program to open the file else return error
    inData.open("Ch9_Ex2Data.txt");
    if (!inData)
    {
        cout << "The input file does not exist. Program terminates!"
             << endl;
        return 1;
    }

    //open the output file from the results that have been gathered
    outData.open("Ch9_Ex2Out.txt");
    if (!outData)
    {
        cout << "Cannot open the output file. Program terminates!" 
             << endl;
        return 1;
    }

    //These are call out functions that need to be coded in 
    //proto type list 
    void getData(ifstream& inFile, studentType sList[], int listSize);
    void calculateGrade(studentType sList[], int listSize);
    int highestScore(const studentType sList[], int listSize);
    void printResult(ofstream& outFile, const studentType sList[], int listSize);

    return 0; //must alwasy have for the main to run, 
}

//how to read and input the file that is given from the computer 
void getData(ifstream& inFile, studentType sList[], int listSize)
{
    for (int i = 0; i < listSize; i++)
        inFile >> sList[i].studentFName >> sList[i].studentLName
               >> sList[i].testScore;
               //going through the list by the index and length of each
}

//find the students letter grade from the given list 
void calculateGrade(studentType sList[], int listSize)
{
    for (int i = 0; i < listSize; i++) //loop to go through the student list 
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

//find the higest score within the list of students. 
int highestScore(const studentType sList[], int listSize)
{
    int hScore = sList[0].testScore; // an empty list to order the test score of students

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

    //how to make the output of the code to work in a ceratin way 'spaces?'
    outFile << setw(15) << "Student Name           "
            << setw(10) << "Test Score"
            << setw(7) << "Grade" << endl;

    //ensures that the whole file has been read propertly
    for (i = 0; i < listSize; i++)
        outFile << left << setw(25)
                << sList[i].studentLName + ", " + sList[i].studentFName
                << right << " " << setw(5) << sList[i].testScore
                << setw(6) << " " << sList[i].grade << endl;

    //show the results to the user
    outFile << endl << "Highest Test Score: " << maxScore << endl;
    outFile << "Students having the highest test score:" << endl;

    //how to format the list to print out to meet all the requirements 
    for (i = 0; i < listSize; i++)
        if (sList[i].testScore == maxScore)
            outFile << sList[i].studentLName + ",  " + sList[i].studentFName
                    << endl;
}
*/

//********************************************************************************************************************************

//program #3 for lab 7 
/*
#include<iostream>
using namespace std;

struct menuItemType
{
    string menuItem;
    double menuPrice;
}; //sad face 

int main()
{
    return 0;
}
*/

//***********************************************************************************************************************************

//program #4 lab 7
/*
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int NO_OF_ITEMS = 8;

struct menuItemType
{
    string menuItem;
    double menuPrice;
};

void getData(ifstream& inFile, menuItemType mList[], int listSize);
void showMenu(menuItemType mList[], int listSize);
void printCheck(menuItemType mList[], int listSize, 
                int cList[], int cListLength);
void makeSelection(int listSize, 
                   int cList[], int& cListLength);
bool isItemSelected(int cList[], int cListLength, int itemNo);

int main()
{
    menuItemType menuList[NO_OF_ITEMS];
    int choiceList[NO_OF_ITEMS];
    int choiceListLength;

    ifstream inFile;

    cout << fixed << showpoint << setprecision(2);

    inFile.open("Ch9_Ex4Data.txt");

    if (!inFile)
    {
        cout << "Cannot open the input file. Program Terminates!"
             << endl;
        return 1;
    }

    getData(inFile, menuList, NO_OF_ITEMS);
    showMenu(menuList, NO_OF_ITEMS);
    makeSelection(NO_OF_ITEMS, 
                  choiceList, choiceListLength);
    printCheck(menuList, NO_OF_ITEMS, 
               choiceList, choiceListLength);

    return 0;
}

void getData(ifstream& inFile, menuItemType mList[], int listSize)
{
    char ch;
	for (int i = 0; i < listSize; i++)
    {
        getline(inFile, mList[i].menuItem);
        inFile >> mList[i].menuPrice;
        inFile.get(ch);
    }
}

void showMenu(menuItemType mList[], int listSize)
{
    cout << "Welcome to Johnny's Resturant" << endl;
    cout << "----Today's Menu----" << endl;

    for (int i = 0; i < listSize; i++)
        cout << i+1 << ": " << left << setw(15) << mList[i].menuItem
             << right << " $" << mList[i].menuPrice << endl;
    cout << endl;
}

void printCheck(menuItemType mList[], int listSize, 
				int cList[], int cListLength)
{
    int i;
    double salesTax;
    double amountDue = 0;

    cout << "Welcome to Johnny's Resturant" << endl;
    for (i = 0; i < cListLength; i++)
    {
        cout << left << setw(15) << mList[cList[i]].menuItem
             << right << " $" << setw(4) << mList[cList[i]].menuPrice << endl;
    amountDue += mList[cList[i]].menuPrice;
    }

    salesTax = amountDue * .05;
    cout << left << setw(15) << "Tax " << right << " $" 
         << salesTax << endl;
    amountDue = amountDue + salesTax;
    cout << left << setw(15) << "Amount Due " << right 
         << " $" << amountDue << endl;
}

void makeSelection(int listSize, 
                   int cList[], int& cListLength)
{
    int itemNo;

    char response;

    cListLength = 0;

    cout << "You can make up to " << listSize
         << " single order selections" << endl;

    cout << "Do you want to make selection Y/y (Yes), N/n (No): ";
    cin >> response;
    cout << endl;

    while ((response == 'Y' || response == 'y') &&
            cListLength < 8)
    {
        cout << "Enter item number: ";
        cin >> itemNo;
        cout << endl;

        if (!isItemSelected(cList,cListLength,itemNo))
            cList[cListLength++] = itemNo - 1;
        else
            cout << "Item already selected" << endl;

        cout << "Select another item Y/y (Yes), N/n (No): ";
        cin >> response;
        cout << endl;
    }
}

bool isItemSelected(int cList[], int cListLength, int itemNo)
{
    bool found = false;

    for (int i = 0; i < cListLength; i++)
        if (cList[i] == itemNo)
        {
            found = true;
            break;
        }

    return found;
}

*/
//************************************************************************************************************************************

//lab 7 problem number 5 
/* 
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int NO_OF_ITEMS = 8;

struct menuItemType 
{
    string menuItem;
    double menuPrice;
};

void getData(ifstream& inFile, menuItemType mList[], int listSize);
void showMenu(menuItemType mList[], int listSize);
void printCheck(menuItemType mList[], int listSize, 
                int cList[][2], int cListLength);
void makeSelection(menuItemType mList[], int listSize, 
                   int cList[][2], int& cListLength);

int main()
{
    menuItemType menuList[NO_OF_ITEMS];
    int choiceList[NO_OF_ITEMS][2];
    int choiceListLength;

    ifstream inFile;

    cout << fixed << showpoint << setprecision(2);

    inFile.open("Ch9_Ex5Data.txt");

    if (!inFile)
    {
        cout << "Cannot open the input file. Program Terminates!"
             << endl;
    return 1;
    }

    getData(inFile, menuList, NO_OF_ITEMS);
    showMenu(menuList, NO_OF_ITEMS);
    makeSelection(menuList, NO_OF_ITEMS, choiceList, choiceListLength);
    printCheck(menuList, NO_OF_ITEMS, choiceList, choiceListLength);

    return 0;
}

void getData(ifstream& inFile, menuItemType mList[], int listSize)
{
    char ch;
    for (int i = 0; i < listSize; i++)
    {
        getline(inFile,mList[i].menuItem);
        inFile >> mList[i].menuPrice;
        inFile.get(ch);
    }
}

void showMenu(menuItemType mList[], int listSize)
{
    cout << "Welcome to Johnny's Resturant" << endl;
    cout << "----Today's Menu----" << endl;

    for (int i = 0; i < listSize; i++)
        cout << i + 1 << ": " << left << setw(15) << mList[i].menuItem
             << right << " $" << mList[i].menuPrice << endl;
    cout << endl;
}

void printCheck(menuItemType mList[], int listSize, 
                int cList[][2], int cListLength)
{
    int i;
    double salesTax;
    double amountDue = 0;

    cout << "Welcome to Johnny's Resturant" << endl;
    for (i = 0; i < cListLength; i++)
    {
        cout << cList[i][1] << " "
             << left << setw(15) << mList[cList[i][0]].menuItem
             << right << " $" << setw(4)
             << mList[cList[i][0]].menuPrice * cList[i][1] << endl;
        amountDue += mList[cList[i][0]].menuPrice * cList[i][1];
    }

    salesTax = amountDue * .05;
    cout << "  " << left << setw(15) << "Tax "
         << right << " $" << salesTax << endl;

    amountDue = amountDue + salesTax;
    cout << "  " << left << setw(15) << "Amount Due "
         << right << " $" << amountDue << endl;
}

void makeSelection(menuItemType mList[], int listSize, 
                   int cList[][2], int& cListLength)
{
    int itemNo;
    int noOfOrders;

    char response;

    cListLength = 0;

    for (int i = 0; i <listSize; i++)
        cList[i][1] = 0;


    cout << "You can make up to " << listSize
         << " different selections" << endl;

    cout << "Do you want to make selection Y/y (Yes), N/n (No): ";
    cin >> response;
    cout << endl;

    while ((response == 'Y' || response == 'y') &&
            cListLength < listSize)
    {
        cout << "Enter item number: ";
        cin >> itemNo;
        cout << endl;
		
        cout << "How many orders: ";
        cin >> noOfOrders;
        cout << endl;
		
        cList[cListLength][0] = itemNo - 1;
        cList[cListLength++][1] += noOfOrders;

        cout << "Select another item Y/y (Yes), N/n (No): ";
        cin >> response;
        cout << endl;
    }
}
*/
//******************************************************************************************************************************************

//lab 7 program # 6 
/*  
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string> 

using namespace std;

struct letterType
{
    char letter;
    int count;
};

void initialize(letterType lList[], int listSize);
void openFile(ifstream& inF, ofstream& outF);
void count(ifstream& inF, letterType lList[], int listSize);
void printResult(ofstream& outF, letterType lList[], int listSize);

int main()
{
    letterType letterList[52];

    ifstream inFile;
    ofstream outFile;

    openFile(inFile, outFile);

    if (!inFile || !outFile)
        return 1;

    initialize(letterList, 52);
    count(inFile, letterList, 52);
    printResult(outFile, letterList, 52);

    return 0;
}

void initialize(letterType lList[], int listSize)
{
    int i;

    for (i = 0; i < 26; i++)
    {
        lList[i].letter = static_cast<char> (i + 65);
        lList[i].count = 0;
    }

    for (i = 26; i < 52; i++)
    {
        lList[i].letter = static_cast<char> (i + 71);
        lList[i].count = 0;
    }
}

void openFile(ifstream& inF, ofstream& outF)
{
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
*/

//***********************************************************************************************************************************

//lab 7 program number 7 

/*
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
 
using namespace std;

struct footBallPlayerType
{   
    string name;
    string position;
    int touchDowns;
    int catches;
    int passingYards;
    int receivingYards;
    int rushingYards;
};


void showMenu();
void getData(ifstream& inf, footBallPlayerType list[], int length);
void printPlayerData(footBallPlayerType list[], int length, int playerNum);
void printData(footBallPlayerType list[], int length);
void saveData(ofstream& outF, footBallPlayerType list[], int length);
int searchData(footBallPlayerType list[], int length, string n);
void updateTouchDowns(footBallPlayerType list[], int length, int tDowns, int playerNum);
void updateCatches(footBallPlayerType list[], int length, int catches, int playerNum);

void updatePassingYards(footBallPlayerType list[], int length, int passYards, int playerNum);
void updateReceivingYards(footBallPlayerType list[], int length, int recYards, int playerNum);
void updateRushingYards(footBallPlayerType list[], int length, int rushYards, int playerNum);


int main()
{
    footBallPlayerType bigGiants[10];
    int numberOfPlayers = 10;

    int choice;
    string name;
    int playerNum;
    int numOfTouchDowns;
    int numOfcatches;
    int numOfPassingYards;
    int numOfReceivingYards;
    int numOfRushingYards;

    ifstream inFile;
    ofstream outFile;

    inFile.open("Ch9_Ex7Data.txt");

    if (!inFile)
    {
        cout << "Input file does not exist. Program terminates!" << endl;
        return 1;
    }

    getData(inFile, bigGiants, numberOfPlayers);
    do
    {

        showMenu();
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "Enter player's name: ";
            cin >> name;
            cout << endl;

            playerNum = searchData(bigGiants, numberOfPlayers, name);
            printPlayerData(bigGiants, numberOfPlayers, playerNum);
            break;

        case 2:
            printData(bigGiants, numberOfPlayers);
            break;

        case 3:
            cout << "Enter player name: ";
            cin >> name;
            cout << endl;

            playerNum = searchData(bigGiants, numberOfPlayers, name);

            cout << "Enter number of touch downs to be added: ";
            cin >> numOfTouchDowns;
            cout << endl;

            updateTouchDowns(bigGiants, numberOfPlayers, numOfTouchDowns, playerNum);
            break;

        case 4:
            cout << "Enter player name: ";
            cin >> name;
            cout << endl;

            playerNum = searchData(bigGiants, numberOfPlayers, name);

            cout << "Enter number of catches to be added: ";
            cin >> numOfcatches;
            cout << endl;

            updateCatches(bigGiants, numberOfPlayers, numOfcatches, playerNum);
            break;

        case 5:
            cout << "Enter player name: ";
            cin >> name;
            cout << endl;

            playerNum = searchData(bigGiants, numberOfPlayers, name);

            cout << "Enter number of passing yards to be added: ";
            cin >> numOfPassingYards;
            cout << endl;

            updatePassingYards(bigGiants, numberOfPlayers, numOfPassingYards, playerNum);
            break;

        case 6:
            cout << "Enter player name: ";
            cin >> name;
            cout << endl;

            playerNum = searchData(bigGiants, numberOfPlayers, name);

            cout << "Enter number of receiving yards to be added: ";
            cin >> numOfReceivingYards;
            cout << endl;

            updateReceivingYards(bigGiants, numOfReceivingYards, numOfReceivingYards, playerNum);
            break;

        case 7:
            cout << "Enter player name: ";
            cin >> name;
            cout << endl;

            playerNum = searchData(bigGiants, numberOfPlayers, name);

            cout << "Enter number of rusinh yards to be added: ";
            cin >> numOfRushingYards;
            cout << endl;

            updateRushingYards(bigGiants, numberOfPlayers, numOfRushingYards, playerNum);
            break;

        case 99:
            break;

        default:
            cout << "Invalid selection." << endl;
        }
    }
    while (choice != 99);

    char response;

    cout << "Would you like to save data: (y,Y/n,N) ";
    cin >> response;
    cout << endl;

    if (response == 'y' || response == 'Y')
        saveData(outFile, bigGiants, numberOfPlayers);

    return 0;
}

void showMenu()
{
    cout << "Select one of the following options:" << endl;
    cout << "1: To print a player's data" << endl;
    cout << "2: To print the entire data" << endl;
    cout << "3: To update a player's touch downs" << endl;
    cout << "4: To update a player's number of catches" << endl;
    cout << "5: To update a player's passing yards" << endl;
    cout << "6: To update a player's receiving yards" << endl;
    cout << "7: To update a player's rushing yards" << endl;
    cout << "99: To quit the program" << endl;
}

void getData(ifstream& inf, footBallPlayerType list[], int length)
{
    for (int i = 0; i < length; i++)
        inf >> list[i].name >> list[i].position 
            >> list[i].touchDowns >> list[i].catches
            >> list[i].passingYards >> list[i].receivingYards
            >> list[i].rushingYards;
}

void printPlayerData(footBallPlayerType list[], int length, int playerNum)
{
    if (0 <= playerNum && playerNum < length)
        cout << "Name: " << list[playerNum].name
             << "Position: "<< list[playerNum].position
             << ";  Touch Downs: " << list[playerNum].touchDowns
             << ";  Number of Catches: " << list[playerNum].catches 
             << ";  Passing Yards: " << list[playerNum].passingYards 
             << ";  Receiving Yards: " << list[playerNum].receivingYards 
             << ";  Rusing Yards: " << list[playerNum].rushingYards << endl << endl;
    else
        cout << "Invalid player number." << endl << endl;
}

void printData(footBallPlayerType list[], int length)
{
    cout << left << setw(10) << "Name"
         << setw(14) << "Position"
         << setw(12) << "Touch Downs"
         << setw(9) << "Catches"
         << setw(12) << "Pass Yards"
         << setw(10) << "Rec Yards"
         << setw(12) << "Rush Yards" << endl;

    for (int i = 0; i < length; i++)
        cout << left << setw(10) << list[i].name
             << setw(14) << list[i].position
             << right << setw(6) << list[i].touchDowns
             << setw(9) << list[i].catches
             << setw(12) << list[i].passingYards
             << setw(10) << list[i].receivingYards
             << setw(12) << list[i].rushingYards << endl;
     cout << endl << endl;
}

void saveData(ofstream& outF, footBallPlayerType list[], int length)
{
    outF.open("Ch9_Ex7Output.txt");

    for (int i = 0; i < length; i++)
        outF << list[i].name
             << " " << list[i].position
             << " " << list[i].touchDowns
             << " " << list[i].catches
             << " " << list[i].passingYards
             << " " << list[i].receivingYards
             << " " << list[i].rushingYards<< endl;
}

int searchData(footBallPlayerType list[], int length, string n)
{
    for (int i = 0; i < length; i++)
        if (list[i].name == n)
            return i;

    return -1;
}

void updateTouchDowns(footBallPlayerType list[], int length, int tDowns, int playerNum)
{
    if (0 <= playerNum && playerNum < length)
        list[playerNum].touchDowns += tDowns;
    else
        cout << "Invalid player number." << endl;
}

void updateCatches(footBallPlayerType list[], int length, int catches, int playerNum)
{
    if (0 <= playerNum && playerNum < length)
        list[playerNum].catches += catches;
    else
        cout << "Invalid player number." << endl;
}

void updatePassingYards(footBallPlayerType list[], int length, int passYards, int playerNum)
{
    if (0 <= playerNum && playerNum < length)
        list[playerNum].passingYards += passYards;
    else
        cout << "Invalid player number." << endl;
}

void updateReceivingYards(footBallPlayerType list[], int length, int recYards, int playerNum)
{
    if (0 <= playerNum && playerNum < length)
        list[playerNum].receivingYards += recYards;
    else
        cout << "Invalid player number." << endl;
}

void updateRushingYards(footBallPlayerType list[], int length, int rushYards, int playerNum)
{
    if (0 <= playerNum && playerNum < length)
        list[playerNum].rushingYards += rushYards;
    else
        cout << "Invalid player number." << endl;
}
*/

