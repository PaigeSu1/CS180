#include <iostream>
#include <string>
#include <cmath>
   
using namespace std;

bool isPalindrome(string str);

int main()
{
	if (isPalindrome("Madam"))
		cout << "Madam" << " is a palindrome." << endl;
	else
		cout << "Madam" << " is not a palindrome." << endl;

	if (isPalindrome("abBa"))
		cout << "abBa" << " is a palindrome." << endl;
	else
		cout << "abBa" << " is not a palindrome." << endl;

	if (isPalindrome("22"))
		cout << "22" << " is a palindrome." << endl;
	else
		cout << "22" << " is not a palindrome." << endl;

	if (isPalindrome("67876"))
		cout << "67876" << " is a palindrome." << endl;
	else
		cout << "67876" << " is not a palindrome." << endl;

	if (isPalindrome("444244"))
		cout << "444244" << " is a palindrome." << endl;
	else
		cout << "444244" << " is not a palindrome." << endl;

	if (isPalindrome("trYmeuemyRT"))
		cout << "trYmeuemyRT" << " is a palindrome." << endl;
	else
		cout << "trYmeuemyRT" << " is not a palindrome." << endl;

	return 0;
}

//function 
bool isPalindrome(string str)
{
    int length = str.length();  

    char ch1, ch2;

    for (int i = 0; i < length / 2; i++)   
    {
        ch1 = toupper(str[i]);
        ch2 = toupper(str[length - 1 - i]);
        if (ch1 != ch2 )
            return false;
    }

    return true;
}