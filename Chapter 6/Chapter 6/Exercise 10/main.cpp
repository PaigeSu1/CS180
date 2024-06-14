//Program: Roll dice
#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;  //Header files ^ 

//Prototype function "debug list"
int rollDice(int num);

int main()
{
    int num;
    char response;

    cout << "Would you like to roll the dice? (Y,y/N,n): ";
    cin >> response;
    cout << endl;
    //While LOOP
    while (response == 'Y' || response == 'y')
    {
        do
        {
            cout << "Enter the sum of the numbers, (2 to 12), "
                 << "to be rolled: " ;
            cin >> num;
        }
        while (num < 2 || num > 12); //NESTED WHILE LOOP 

        cout << "The number of times the dice are "
             << "rolled to get the sum " << num << " = " << rollDice(num) << endl;
        cout << "Would you like to roll the dice again? (Y,y/N,n): " << endl;
        cin >> response;
        cout << endl;
     }

    return 0;
}

//Function 
int rollDice(int num)
{
    int die1;
    int die2;
    int sum;
    int rollCount = 0;

    srand(time(0));

    do
    {
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        sum = die1 + die2;
        rollCount++;
    } while (sum != num);

    return rollCount;
}
