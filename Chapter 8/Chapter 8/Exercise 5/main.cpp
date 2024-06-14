//Header fiile
#include <iostream>
#include <cstring> //importons string functions  
#include <cctype> //used for chacters ex:: char
using namespace std;

int main()
{
    char str[81]; //the amoumnt of char that can be stored within a string
    //in this case 81 characters can be stored within a user input string

    int len; //local var to store the length of a string 

    int i; //loacl variable for loop coutner

    //Aske the user to enter a string
    cout << "Enter a string: ";
    cin.get(str, 80); //store that string

    cout << endl;
    cout << "String in upper case letters is:" << endl;

    len = strlen(str); //what is the length of the string

    for (i = 0; i < len; i++)
        cout << static_cast<char>(toupper(str[i])); //must use a static case because char and ints can not mix wth each other.
                                //toupper is a function to turn all the characters upcase 
                                //in this case through the strings postion value
    cout << endl;

    return 0;
}