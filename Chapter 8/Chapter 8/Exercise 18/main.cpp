  
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int ROWS = 4;
const int COLS = 4;
const int NUM_OF_PAIRS = 8;

void fillBoard(int b[][COLS]);
void showBoard(int b[][COLS]);
void displayBoard(int b[][COLS], bool bPos[][COLS]);
void playGame(int b[][COLS], bool bPos[][COLS]);
void getCardLoaction(int b[][COLS], bool bPos[][COLS],
                     int& row, int& col);

int main()
{
	int board[ROWS][COLS];
    bool matchPosBoardboard[ROWS][COLS] = {{false}};

    fillBoard(board);
    displayBoard(board, matchPosBoardboard);
    playGame(board, matchPosBoardboard);
    
	return 0;
}

void fillBoard(int b[][COLS])
{
    int row;
    int col;
    int card = 1;
    bool placedCard;

    srand(time(0)); 

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            b[i][j] = -1;
    
    for (int i = 0; i < NUM_OF_PAIRS; i++)
    { 
        placedCard = false;
        while (!placedCard)
        {
            row = rand() % ROWS; 
            col = rand() % COLS;
            if (b[row][col] == -1)
            {
                b[row][col] = card;

                bool found = false;

                while (!found)
                {
                    row = rand() % ROWS; 
                    col = rand() % COLS;

                    if (b[row][col] == -1)
                    {
                        b[row][col] = card;
                        found = true;
                    }
                }
                placedCard = true;
            }
        }
        card++;
    }
}

void playGame(int b[][COLS], bool bPos[][COLS])
{
    int pair = 0;
    int row1, col1;
    int row2, col2;
    
    while (pair != NUM_OF_PAIRS)
    {
        getCardLoaction(b, bPos, row1, col1);
        bPos[row1][col1] = true;
        displayBoard(b, bPos);

        getCardLoaction(b, bPos, row2, col2);
        bPos[row2][col2] = true;
        displayBoard(b, bPos);

        if (b[row1][col1] == b[row2][col2])
        {
            cout << "Pair match" << endl;
            pair++;
        }
        else
        {
            bPos[row1][col1] = false;
            bPos[row2][col2] = false;
            cout << "Pair do not match. Select again!" << endl;
        }

        displayBoard(b, bPos);
    }
}

void getCardLoaction(int b[][COLS], bool bPos[][COLS],
                     int& row, int& col)
{
    bool done;

    done = false;

    while (!done)
    {
        cout << "Enter the row (1 to 4) and col (1 to 4) position of the pair: ";
        cin >> row >> col;
        cout << endl;

        row--;
        col--;

        while (row < 0 || row > ROWS - 1 || col < 0 || col > COLS - 1)
        {
            cout <<"Invalid position." << endl;
            cout << "Enter the row (1 to 4) and col (1 to 4) position of the pair: ";
            cin >> row >> col;
            cout << endl;

            row--;
            col--;
        }

        if (bPos[row][col] == true)
            cout << "Card at this position already faced up. Select position again." << endl;
        else
            done = true;
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
}

void displayBoard(int b[][COLS], bool bPos[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            if (bPos[i][j] == true)
                cout << setw(4) << b[i][j];
            else
                cout << setw(4) << '*';
        cout << endl;
    } 
}