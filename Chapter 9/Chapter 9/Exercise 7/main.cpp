//header files 
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
};//sad face

//proto function list 
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
    //open the file and have user enter infomation in about the player
    // then use a switch case to check if that infomation is vaild
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
    //print the menu functions that a user can do 
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
    //go through the list and find the needed data 
    for (int i = 0; i < length; i++)
        inf >> list[i].name >> list[i].position 
            >> list[i].touchDowns >> list[i].catches
            >> list[i].passingYards >> list[i].receivingYards
            >> list[i].rushingYards;
}

void printPlayerData(footBallPlayerType list[], int length, int playerNum)
{
    //print the data that was found to the user 
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