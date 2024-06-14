//header files    
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

//number of items a user can get
const int NO_OF_ITEMS = 8;

struct menuItemType
{
    string menuItem;
    double menuPrice;
}; // sad face

//proto list 
void getData(ifstream& inFile, menuItemType mList[], int listSize);
void showMenu(menuItemType mList[], int listSize);
void printCheck(menuItemType mList[], int listSize, 
                int cList[], int cListLength);
void makeSelection(int listSize, 
                   int cList[], int& cListLength);
bool isItemSelected(int cList[], int cListLength, int itemNo);

int main()
{
    //use the struct throughtout the whole program 
    menuItemType menuList[NO_OF_ITEMS];
    int choiceList[NO_OF_ITEMS];
    int choiceListLength;

    //open and close the files
    ifstream inFile;

    cout << fixed << showpoint << setprecision(2);

    inFile.open("Ch9_Ex4Data.txt");

    if (!inFile)
    {
        cout << "Cannot open the input file. Program Terminates!"
             << endl;
        return 1;
    }

    //call the functions in the program 
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
    //a way to read data into program
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
    //show the user the menu and have the program functino as input based
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
    //from what user picked return the total price
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
    //ask the user what they want 
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
    //function to make sure that there are no duplicatee functions 
    bool found = false;

    for (int i = 0; i < cListLength; i++)
        if (cList[i] == itemNo)
        {
            found = true;
            break;
        }

    return found;
}
