#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main()
{
    int num;
    int guess;
    int diff;
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
        else
        {
            diff = abs(num - guess);
            if (guess < num)
            {
                if (diff >= 50)
                    cout << "Your guess is very low." << endl;
                else if (30 <= diff && diff < 50)
                    cout << "Your guess is low." << endl;
                else if (15 <= diff && diff < 30)
                    cout << "Your guess is moderately low." << endl;
                else if (0 < diff && diff < 15)
				    cout << "Your guess is somewhat low." << endl;
			   }
               else
               {
	               if (diff >= 50)
				   	   cout << "Your guess is very high." << endl;
				   else if (30 <= diff && diff < 50)
				        cout << "Your guess is high." << endl;
				   else if (15 <= diff && diff < 30)
				        cout << "Your guess is moderately high." << endl;
				   else if (0 < diff && diff < 15)
				   	    cout << "Your guess is somewhat high." << endl;
		       }

		       if (noOfGuesses != 5)
		           cout << "Guess again!" << endl;
        }
    }//end while

    if (!done)
        cout << "You lose! The correct number is " << num << endl;

	return 0;
}
