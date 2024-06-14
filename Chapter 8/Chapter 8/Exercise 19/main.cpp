#include <iostream>
#include <iomanip>
 
using namespace std;

const int ROWS = 13;
const int COLUMNS = 6;

void initializeSeatPlan(char sPlan[][COLUMNS], int rowSize);
void showSeatAssignments(char sPlan[][COLUMNS], int rowSize);
void showMenu(char sPlan[][COLUMNS], int rowSize);
void assignSeat(char sPlan[][COLUMNS], int rowSize);
void selectSeat(int startRows, int endRows, 
					  int& rowNo, char& columnNo);

bool isFirstClassFull(char sPlan[][COLUMNS], int rowSize);
bool isBusinessClassFull(char sPlan[][COLUMNS], int rowSize);
bool isEconomyClassFull(char sPlan[][COLUMNS], int rowSize);

void assignFirstClassSeat(char sPlan[][COLUMNS], int rowSize);

void assignSeatBusinessClass(char sPlan[][COLUMNS], int rowSize);
void assignSeatEconomyClass(char sPlan[][COLUMNS], int rowSize);

void initializeSeatPlan(char sPlan[][COLUMNS], int rowSize)
{
	int i, j;

	for (i = 0; i < rowSize; i++)
		for (j = 0; j < COLUMNS; j++)
			sPlan[i][j] = '*';
}

void showSeatAssignments(char sPlan[][COLUMNS], int rowSize)
{
	int i, j;

  cout << setw(5) << ""
  << setw(4) << "A"
  << setw(4) << "B"
  << setw(4) << "C" 
  << setw(4) << "D"
  << setw(4) << "E"
  << setw(4) << "F" << endl;

	for (i = 0; i < rowSize; i++)
	{
		cout << "Row " << setw(1) << i+1;
    if (i >= 9)
      cout << setw(3);
    else
      cout << setw(4);
		for (j = 0; j < COLUMNS; j++)
		{
			cout << sPlan[i][j] << setw(4);
		}
		cout << endl;
	}

	cout << "* -- available seat" << endl;
	cout << "X -- occupied seat" << endl;
	cout << endl;
}

void assignSeat(char sPlan[][COLUMNS], int rowSize)
{
	char ticketType;
	char resp;
 
	cout << "Enter ticket type: F/f (first class); "
		 << " (B/b) (business class); E/e (economy class): ";
	cin >> ticketType;
	cout << endl;
			
	switch (ticketType)
	{
	case 'f': 
	case 'F':	
        if (!isFirstClassFull(sPlan, rowSize))
            assignFirstClassSeat(sPlan, rowSize);
        else 
        {
            cout << "Sorry!!! First Class is Full" << endl;
            cout << "Press Y/y to continue: ";
            cin >> resp;
            cout << endl;
        }

        break;

    case 'b': 
	case 'B':	
        if (!isBusinessClassFull(sPlan, rowSize))
            assignSeatBusinessClass(sPlan, rowSize);
        else 
        {
            cout << "Sorry!!! business class is full" << endl;
            cout << "Press Y/y to continue: ";
            cin >> resp;
            cout << endl;
        }

        break;

	case 'e': 
	case 'E':	
        if (!isEconomyClassFull(sPlan, rowSize))
            assignSeatEconomyClass(sPlan, rowSize);
        else
        {
            cout << "Sorry!!! Economic Class is Full" << endl;
            cout << "Press Y/y to continue: ";
            cin >> resp;
            cout << endl;
        }
    }

    showSeatAssignments(sPlan, rowSize);
}

void showMenu(char sPlan[][COLUMNS], int rowSize)
{
    cout << "This program assigns seats for a commercial airplane."
         << endl;
    cout << "The current seat assignments is as follows: "
    << endl;
    cout << endl;
    showSeatAssignments(sPlan, rowSize);
    cout << "Rows 1 and 2 are for first class passengers." << endl;
    cout << "Rows 3 through 7 are for business class passenders." << endl;
    cout << "Rows 8 through 13 are for economy class passenders." << endl;
}

bool isFirstClassFull(char sPlan[][COLUMNS], int rowSize)
{
    int i, j;

    int assignedSeats = 0;

    for (i = 0; i < 2; i++)
        for (j = 0; j < COLUMNS; j++)
            if (sPlan[i][j] == 'X')
                assignedSeats++;

    return (assignedSeats == 2 * COLUMNS);
}

bool isBusinessClassFull(char sPlan[][COLUMNS], int rowSize)
{
    int i, j;

    int assignedSeats = 0;

    for (i = 2; i < 7; i++)
        for (j = 0; j < COLUMNS; j++)
            if (sPlan[i][j] == 'X')
                assignedSeats++;

    return (assignedSeats == 5 * COLUMNS);
}

bool isEconomyClassFull(char sPlan[][COLUMNS], int rowSize)
{
    int i, j;

    int assignedSeats = 0;

    for (i = 7; i < 13; i++)
        for (j = 0; j < COLUMNS; j++)
            if (sPlan[i][j] == 'X')
                assignedSeats++;

    return (assignedSeats == 6 * COLUMNS);
}

void selectSeat(int startRows, int endRows, 
                      int& rowNo, char& columnNo)
{
    cout << "Enter Row number " << startRows << " - " << endRows << ": ";
    cin >> rowNo;
    cout << endl;

    while (rowNo < startRows || rowNo > endRows)
    {	
        cout << "Enter Row number " << startRows << " - " << endRows << ": ";
        cin >> rowNo;
        cout << endl;
	}
	
    cout << "Enter seat letter (A - F): ";
    cin >> columnNo;
    cout << endl;

    while (columnNo < 'A' || columnNo > 'F')
    {
        cout << "Enter seat letter (A - F): ";
        cin >> columnNo;
        cout << endl;
    }
}

void assignFirstClassSeat(char sPlan[][COLUMNS], int rowSize)
{
    int rowNum;
    char columnPos;

    if (!isFirstClassFull(sPlan, rowSize))
    {
        selectSeat(1, 2, rowNum, columnPos);

        while (sPlan[rowNum - 1][columnPos -65] != '*')
	    {
            cout << "*#*#*#*# This seat is occupied *#*#*#*#" << endl;
            cout << "Make another available selection: " << endl;
            cout << endl;

            showSeatAssignments(sPlan, rowSize);
				
            selectSeat(1, 2, rowNum, columnPos);
        }
	
        sPlan[rowNum - 1][columnPos - 65] = 'X';
        cout << "This seat is reserved for you" << endl;
    }
    else
        cout << "Sorry!!! First Class is Full" << endl;
}

void assignSeatBusinessClass(char sPlan[][COLUMNS], int rowSize)
{
    int rowNum;
    char columnPos;

    if (!isBusinessClassFull(sPlan, rowSize))
    {
        selectSeat(3, 7, rowNum, columnPos);

        while (sPlan[rowNum - 1][columnPos -65] != '*')
        {
            cout << "*#*#*#*# This seat is occupied *#*#*#*#" << endl;
            cout << "Make another available selection: " << endl;
            cout << endl;

            showSeatAssignments(sPlan, rowSize);
				
            selectSeat(3, 7, rowNum, columnPos);
        }

        sPlan[rowNum - 1][columnPos - 65] = 'X';
        cout << "This seat is reserved for you" << endl;
    }
    else
        cout << "Business class is full." << endl;
}

void assignSeatEconomyClass(char sPlan[][COLUMNS], int rowSize)
{
    int rowNum;
    char columnPos;

    if (!isEconomyClassFull(sPlan, rowSize))
    {
        selectSeat(8, 13, rowNum, columnPos);

        while (sPlan[rowNum - 1][columnPos -65] != '*')
        {
            cout << "*#*#*#*# This seat is occupied *#*#*#*#" << endl;
            cout << "Make another available selection: " << endl;
            cout << endl;

            showSeatAssignments(sPlan, rowSize);
				
            selectSeat(8, 13, rowNum, columnPos);
        }

        sPlan[rowNum - 1][columnPos -65] = 'X';
        cout << "This seat is reserved for you" << endl;
    }
    else
        cout << "Economic class is full." << endl;
}

int main()
{
	char seatPlan[ROWS][COLUMNS];
	char resp;

	initializeSeatPlan(seatPlan, ROWS);

	showMenu(seatPlan, ROWS);

	cout << "To reserve a seat enter Y/y(Yes), N/n(No): " << endl;
	cin >> resp;
	cout << endl;
	
	while (resp == 'y' || resp == 'Y')
	{
		assignSeat(seatPlan, ROWS);
		showMenu(seatPlan, ROWS);
		cout << "Reserve another seat Y/y(Yes), N/n(No): ";
		cin >> resp;
		cout << endl;
	}

	return 0;
}
