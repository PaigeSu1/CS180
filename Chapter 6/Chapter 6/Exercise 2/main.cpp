#include <iostream>
using namespace std;

//Function prototype/stub
//Think like a function debug list 
bool isVowel(char ch);

//Must always have a main function frist 
int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << endl;

    cout << ch << " is a vowel: " << isVowel(ch) << endl;
                                    //Function call (if by its self it will only go to function otherwise will go to the debug list)
	return 0;
}

bool isVowel(char ch)
{
    //using a switch case here if more efficetive than writing a bunch of if statments that could take longer runing time. 
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
        return true; // 1 This means that a statment is true after the switch case has been excuted 
	default: 
        return false; //0 This means that a statment is False because the switch case did not find anything
	}
}
//The output is dependent on the computer in my case 1 = True and 0 = False; 