// High temperature:  38 40 45 52 65 80 75 90 85 82 70 44
// Low temperature: -10 5 2 25 30 40 45 60 50 46 15 5
//header files
#include <iostream> 
using namespace std;

//a variable that dose not change like the number of months 
const int NO_OF_MONTHS = 12;

//Prototype function list 'debug list'
// all these functions are two Diminsetional arrays 
void getData(int twoDim[][2], int rows);
int averageHigh(int twoDim[][2], int rows);
int averageLow(int twoDim[][2], int rows);
int indexHighTemp(int twoDim[][2], int rows);
int indexLowTemp(int twoDim[][2], int rows);

int main()
{
    //List that can store both high and losw temptures of the months 
    int hiLowArray[NO_OF_MONTHS][2];

    int indexHigh;
    int indexLow;

    getData(hiLowArray, NO_OF_MONTHS);

    cout << "Average high temperature: "
         << averageHigh(hiLowArray, NO_OF_MONTHS) << endl;
    cout << "Average low temperature: "
         << averageLow(hiLowArray, NO_OF_MONTHS) << endl;

    indexHigh = indexHighTemp(hiLowArray, NO_OF_MONTHS);
    cout << "Highest temperature: " << hiLowArray[indexHigh][0] << endl;

    indexLow = indexLowTemp(hiLowArray, NO_OF_MONTHS);
    cout << "Lowest temperature: " << hiLowArray[indexLow][1] << endl;

    return 0;
}

//Input the high and low temps for each month
void getData(int twoDim[][2], int rows)
{
    int i;//counter var. 

    cout << "Enter high temperature for each month" << endl; //user input

    for (i = 0; i < rows; i++) //high temperature
        cin >> twoDim[i][0]; //[i] and [0]

    cout << "Enter low temperature for each month" << endl; //user input 

    for (i = 0; i < rows; i++)  //low temperature
        cin >> twoDim[i][1]; //[i] and [1]
}

//find the avg high temp
int averageHigh(int twoDim[][2], int rows)
{
    int i;
    int sum = 0;

    for (i = 0; i < rows; i++)
        sum = sum + twoDim[i][0]; //think of this like x and y being changed
        //in some sort of way

    if (rows > 0)
        return sum / rows;
    else
        return 0;
}

//find the avg low twmp
int averageLow(int twoDim[][2], int rows)
{
    int i;
    int sum = 0;

    for (i = 0; i < rows; i++)
        sum = sum + twoDim[i][1];//note this rule

    if (rows > 0)
        return sum / rows;
    else
        return 0;
}

//what months have highest temp
int indexHighTemp(int twoDim[][2], int rows)
{
    int i;
	
    int highIndex = 0;

    for (i = 1; i < rows; i++)
        if (twoDim[highIndex][0] < twoDim[i][0]) //note this 
            highIndex = i ;

    return highIndex;
}

//what months have lowest tmep 
int indexLowTemp(int twoDim[][2], int rows)
{
    int i;
	
    int lowIndex = 0;

    for (i = 1; i < rows; i++)
        if (twoDim[lowIndex][1] > twoDim[i][1]) //note this 
        lowIndex = i ;

    return lowIndex;
}