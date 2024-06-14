  
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int ROWS = 20;
const int COLS = 20;

void fillBoard(int b[][COLS]);
void showBoard(int b[][COLS]);
void findPeaks(int b[][COLS], int rows);

int main()
{
	int board[ROWS][COLS];

    fillBoard(board);
    showBoard(board);
    findPeaks(board, ROWS);
    
	return 0;
}

void fillBoard(int b[][COLS])
{
    srand(time(0));

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            b[i][j] = rand();
}
                   
void showBoard(int b[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            cout << setw(10) << b[i][j] << " ";
        cout << endl;
    }

    cout << endl;
}

void findPeaks(int b[][COLS], int rows)
{
    int neighborRowPos;
    int neighborColPos;
    bool isMax = true;
    bool isMin = true;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < COLS; j++)
        {
            isMax = true;
            isMin = true;

            for (neighborRowPos = i - 1; neighborRowPos <= i + 1; neighborRowPos++)
                for (neighborColPos = j - 1; neighborColPos <= j + 1; neighborColPos++)
                {
                    if ( (neighborRowPos >= 0 && neighborRowPos < rows &&
                        neighborColPos >= 0 && neighborColPos < COLS) ) 
                        if (!(neighborRowPos == i && neighborColPos == j))
                    {
                        if (b[i][j] > b[neighborRowPos][neighborColPos])
                            isMin = false;

                        if (b[i][j] < b[neighborRowPos][neighborColPos])
                            isMax = false;
                    }
                }

                    if (isMax )
                        cout << "b[" << i << "][" << j
                             << "] is a peak and it is a maximum." << endl;

                    if (isMin )
                        cout << "b[" << i << "][" << j 
                             << "] is a peak and it is a minimum." << endl;
        }
}