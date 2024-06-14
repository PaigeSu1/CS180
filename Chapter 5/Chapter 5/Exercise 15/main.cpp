#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main()
{
    int num;
    int guess;
    bool done;

    int noOfGuesses;

    srand(time(0));
    num = rand() % 100;

    done = false;
    noOfGuesses = 0;

    while ((noOfGuesses < 5) && (!done))
    {
        cout << "Enter an integer greater than or equal to 0 and "
	         << "less than 100: ";
        cin >> guess;
        cout << endl;
        noOfGuesses++;

        if (guess == num)
        {
            cout << "Winner!. You guessed the correct number." << endl;
            done = true;
        }
        else if (guess < num)
            cout << "Your guess is lower than the number." << endl;
        else
            cout << "Your guess is higher than the number." << endl;

        if (noOfGuesses != 5 && !done)
            cout << "Guess again!" << endl;
    }//end while

    if (!done)
        cout << "You lose! The correct number is " << num << endl;

	return 0;
}