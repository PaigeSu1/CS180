// 12 90 6 34 17 23 36 10 2 80 15 44 40 18 14 55 62 52 11 86
//Header files 
#include <iostream>
#include <iomanip>
using namespace std;

//Proto-Functions 'debug list'
void inputArray(int list[], int size);
void doubleArray(const int list1[], int list2[], int size);

//think similar to rows and colums that are found in two dimistional arrays 
void copyAlphaBeta(int twoDim[][4], const int list1[], 
                   const int list2[], int rows);
void printArray(const int list[], int size);

void printTwoDim(const int twoDim[][4], int rows);

int main()
{
    int alpha[20];//an array with 20 spots
    int beta[20]; //array with 20 spots 
    int matrix[10][4]; //make a matxtiz that is 10 colums, and 4 rows, 

    inputArray(alpha, 20); //ask user to input numbers into array Alpha 

    cout << "Alpha after reading 20 numbers" << endl;
    printArray(alpha, 20);
    cout << "***********************************************"
         << endl << endl;

    doubleArray(alpha, beta, 20); //ask user to input numbers into array beta which caombines to beta 

    cout << "Beta after a call to doubleArray" << endl;
    printArray(beta, 20);
    cout << "***********************************************" 
         << endl << endl;

    copyAlphaBeta(matrix, alpha, beta, 10);  //store this data into a matrix out point 

    cout << "Matrix after a call to copyAlphaBeta" << endl;
    printTwoDim(matrix, 10);
    cout << "***********************************************"
         << endl << endl;

    return 0;
}

//stores the letter that the user had entered in
void inputArray(int list[], int size)
{
    int i; //counter variable

    cout << "Enter " << size << " integers" << endl;

    for (i = 0; i < size; i++)
        cin >> list[i];//store user input in the spots that it was entered 
}

//Function to copy an array alpaha into a new with the same values
void doubleArray(const int list1[], int list2[], int size)
{
    int i;

    for (i = 0; i < size; i++)
        list2[i] = 2 * list1[i];
}

//Function to make a 2 dimismtional array 
void copyAlphaBeta(int twoDim[][4], const int list1[], 
                   const int list2[], int rows)
{
    int i, j; //coutner variables 

    for (i = 0; i < 5; i++)
        for (j = 0; j < 4; j++)
            twoDim[i][j] = list1[4 * i + j];

    for (i = 5; i < rows; i++)
        for (j = 0; j < 4; j++)
            twoDim[i][j] = list2[4 * (i - 5) + j];
}

//function to print out a single array 
void printArray(const int list[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        cout << list[i] << " ";

        if ((i + 1) % 15 == 0)
            cout << endl;
    }

    cout << endl;
}

//function to print out a 2 dimsintial array
void printTwoDim(const int twoDim[][4], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << setw(8) << twoDim[i][j] << " ";
        cout << endl;
    }
}