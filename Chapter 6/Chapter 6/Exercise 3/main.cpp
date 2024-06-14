//Header file   
#include <iostream>
using namespace std;

bool isVowel(char ch);

int main() 
{
	char ch;
	int numberOfVowels = 0;

	cout << "Enter a sentence." << endl;

	cin.get(ch);
	while (ch != '\n') //While loop used instead of a switch case 
	{
		if (isVowel(ch))   //The function call 
			numberOfVowels++; // While loop counter 

		cin.get(ch); //get and store the data; 
	}

	cout << "There are " << numberOfVowels 
		 << " vowels in this sentence." << endl;
	return 0;
}


bool isVowel(char ch)
{
	switch (ch)
	{
	case 'A': 
    case 'E': 
    case 'I': 
    case 'O': 
    case 'U':
	case 'a': 
    case 'e': 
    case 'i': 
    case 'o': 
    case 'u': 
        return true;
	default: 
        return false;
	}
}