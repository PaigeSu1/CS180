#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

const int LIST_SIZE = 5;

void generatePick5Numbers(int list[], int length);
int seqSearch(const int list[], int listLength, int searchItem);

int main()
{
    int winningNumbers[LIST_SIZE];
    int playerChoice[LIST_SIZE];
    int numbersMatched = 0;

    generatePick5Numbers(winningNumbers, LIST_SIZE);

    cout << "To play the Pick-5 game, enter five numbers "
         << " bewteen 1 and 9 (inclusive): ";

    for (int i = 0; i < LIST_SIZE; i++)
        cin >>playerChoice[i];

    cout << endl;

    cout << "Players's number matched with the Pick-5 numbers at poistion: ";

    for (int i = 0; i < LIST_SIZE; i++)
        if (winningNumbers[i] == playerChoice[i])
        {
            cout << i << ", ";
            numbersMatched++;
        }

    cout << endl;

    if (numbersMatched == 5)
        cout << "Congratulations!!! You won the Pick-5 lottery!!!" << endl;
    else
    {
        cout << "You matched only " << numbersMatched << " numbers." << endl;

        cout << "The winning numbers are: ";
        for (int i = 0; i < LIST_SIZE; i++)
            cout << winningNumbers[i] << ", ";
        cout << endl;
    }

    return 0;
}

void generatePick5Numbers(int list[], int length)
{
    int num;
    int count;

    srand(time(0));

    list[0] = static_cast<int> (rand()) % 9 + 1;
    count = 1;

    while (count < 5)
    {
        num = static_cast<int> (rand()) % 9 + 1;
        if (seqSearch(list, count, num) == -1)
        {
            list[count] = num;
            count++;
        }
    } 
}

int seqSearch(const int list[], int listLength, int searchItem)
{
    int loc;
    bool found = false;

    loc = 0;

    while (loc < listLength && !found)
        if (list[loc] == searchItem)
            found = true;
        else
            loc++;

    if (found)
        return loc;
    else
        return -1;

}