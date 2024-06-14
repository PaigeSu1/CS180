
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

const int ROWS = 3;
const int COLS = 3; 

void fillBoard(int b[][COLS]);
void showBoard(int b[][COLS]);
bool isMagicSquare(int b[][COLS], int rows);

int main()
{
	int board[ROWS][COLS];

    long long count = 0;
    long long numOfTrials;

    cout << "Enter the number of times to test magic square: ";
    cin >> numOfTrials;
    cout << endl;

    for (long long i = 0; i < numOfTrials; i++)
    {
        fillBoard(board);

        if (isMagicSquare(board, ROWS))
        {
            showBoard(board);
            count++;
        }
    }

    cout << "Number of times magic square occurred: " << count << endl;
    
	return 0;
}

void fillBoard(int b[][COLS])
{
    int row;
    int col;
    int num = 1;
    bool placedNum;

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            b[i][j] = -1;
    
    for (int i = 0; i < ROWS * COLS; i++)
    { 
        placedNum = false;
        while (!placedNum)
        {
            row = rand() % ROWS; 
            col = rand() % COLS;
            if (b[row][col] == -1)
            {
                b[row][col] = num;
                placedNum = true;
            }
        }
        num++;
    }
}

                   
void showBoard(int b[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            cout << setw(4) << b[i][j];
        cout << endl;
    }

    cout << endl;
}

bool isMagicSquare(int b[][COLS], int rows)
{
    int magicNum;
    int sum = 0;

    bool isMagic = true;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < COLS; j++)
            sum = sum + b[i][j];

    magicNum = sum / rows;;

    for (int i = 0; i < rows; i++)
    {
        sum = 0;

        for (int j = 0; j < COLS; j++)
            sum = sum + b[i][j];

        if (sum != magicNum)
        {
            isMagic = false;
            break;
        }
    }

    if (isMagic)
    {
        for (int j = 0; j < COLS; j++)
        {
            sum = 0;

            for (int i = 0; i < rows; i++)
                sum = sum + b[i][j];

            if (sum != magicNum)
            {
                isMagic = false;
                break;
            }
        }
    }

    if (isMagic)
    {
        sum = 0;

        for (int i = 0; i < rows; i++)
            sum = sum + b[i][i];

        isMagic = false;
    }

    if (isMagic)
    {
        sum = 0;

        for (int i = 0; i < rows; i++)
            sum = sum + b[i][rows - 1 - i];

        isMagic = false;
    }

    return isMagic; 
}
