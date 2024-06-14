//header files
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

//the number of items that can be entereed 
const int NO_OF_ITEMS = 8;

struct menuItemType 
{
    string menuItem;
    double menuPrice;
}; //sad face

//proto list 
void getData(ifstream& inFile, menuItemType mList[], int listSize);
void showMenu(menuItemType mList[], int listSize);
void printCheck(menuItemType mList[], int listSize, 
                int cList[][2], int cListLength);
void makeSelection(menuItemType mList[], int listSize, 
                   int cList[][2], int& cListLength);

int main()
{
    menuItemType menuList[NO_OF_ITEMS];
    int choiceList[NO_OF_ITEMS][2]; // two list types are being used here
    int choiceListLength;

    //opening files here
    ifstream inFile;

    cout << fixed << showpoint << setprecision(2);

    inFile.open("Ch9_Ex5Data.txt");

    if (!inFile)
    {
        cout << "Cannot open the input file. Program Terminates!"
             << endl;
    return 1;
    }

    //functions calss 
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

    //this is what had changed in the program 
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
		
        //a differnce is loacted here 
        cList[cListLength][0] = itemNo - 1;
        cList[cListLength++][1] += noOfOrders;

        cout << "Select another item Y/y (Yes), N/n (No): ";
        cin >> response;
        cout << endl;
    }
}
