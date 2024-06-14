#include <iostream>
#include <string>

using namespace std;
 
int main()
{
	char letter;
    int noOfLetters;
    char response;

    cout << "Enter Y/y to convert a telephone number " 
         << "form letters to digits.\n"
         << "Enter any other letter to terminate the program." << endl;

    cin >> response;

    while (response == 'Y' || response == 'y')
    {

        cout << "Enter a telephone number using letters: ";
        cin >> letter;
        cout << endl;

        noOfLetters = 0;

		cout << "The corresponding telephone number is: \n";

        while (noOfLetters < 7)
        {
            noOfLetters++;

            switch (letter)
            {
            case 'a': 
            case 'b': 
            case 'c':
	        case 'A': 
            case 'B':
	        case 'C': 
                cout << '2'; 
                break;
            case 'd': 
            case 'e': 
            case 'f':
            case 'D': 
            case 'E':
            case 'F': 
                cout << '3';
                break;
            case 'g': 
            case 'h': 
            case 'i':
            case 'G': 
            case 'H':
            case 'I': 
                cout << '4';
                break;
            case 'j': 
            case 'k': 
            case 'l':
            case 'J': 
            case 'K':
            case 'L': 
                cout << '5';
                break;
            case 'm': 
            case 'n': 
            case 'o':
            case 'M': 
            case 'N':
            case 'O': 
                cout << '6';
                break;
            case 'p': 
            case 'q': 
            case 'r': 
            case 's':
            case 'P': 
            case 'Q': 
            case 'R':
            case 'S': 
                cout << '7';
                break;
            case 't': 
            case 'u': 
            case 'v':
            case 'T': 
            case 'U':
            case 'V': 
                cout << '8';
                break;
            case 'w': 
            case 'x': 
            case 'y': 
            case 'z':
            case 'W': 
            case 'X': 
            case 'Y':
            case 'Z': 
                cout << '9';
            }
            if (noOfLetters == 3)
                cout << '-';
            cin >> letter;
        }

        cin.ignore(100, '\n');

        cout << "\nTo process another telephone number, enter Y/y \n"
             << "Enter any other letter to terminate the program." << endl;
	    cin >> response;
        cout << endl;
	   }//end while
}