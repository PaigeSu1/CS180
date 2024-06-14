//header files
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//an int that dose not change 
const int DIGITS = 20;

//Proto-Type functino list 
int readNum(int list[], int& length);

void sumNum(int list1[], int numOfElementsList1,
            int list2[], int numOfElementsList2);
  
int main()
{
	int num1[DIGITS]; //list 1 
    int num2[DIGITS]; //list 2

    int numOfDigitsNum1;
    int numOfDigitsNum2;

    //how to make the decimal look pretty 
    cout << fixed << showpoint << setprecision(2);
    
    //error if program can not read num of dights aka char(mixed values)
    if(!readNum(num1, numOfDigitsNum1)) {
        return 0;
    } 
    if(!readNum(num2, numOfDigitsNum2)) {
        return 0;
    } 

    //call the function sumNum
    sumNum(num1, numOfDigitsNum1, num2, numOfDigitsNum2);

	return 0;
}
 
 //function
int readNum(int list[], int& length)
{
    int index;
    int strIndex;
    string numStr;

    //ask user to enter input which is stored in DIGTS List
    cout << "Enter a postive integer of at most " << DIGITS << " digits: ";
    cin >> numStr; // and also stored in the NumStr; 
    cout << endl;

    length = numStr.length(); //giving a variable name to the function of length()
    index = 0; //starting from the first dighit 

    if (numStr.length() <= DIGITS) { //if program has less than 20 digits do action
        for (strIndex = numStr.length() - 1; strIndex >= 0; strIndex--)
        {
            list[index] = static_cast<int> (numStr.at(strIndex)) - 
                          static_cast<int> ('0');
            index++;
        }
        return 1;
    } else { //if program has more than 20 dights, prog. breaks, 
        cout << "This number has more than 20 digits. "
             << "Program terminates!" << endl;
        cout << endl;
       return 0;
    }
}

//Function to fint the sum of nums in list1 and list2 
void sumNum(int list1[], int numOfElementsList1,
            int list2[], int numOfElementsList2)
{
	int sumArray[DIGITS + 1];

    int sumDigits;

    int index1 = 0;//list1
    int index2 = 0;//list2
    int index = 0;
    int carry = 0;

    while (index1 < numOfElementsList1 &&
           index2 < numOfElementsList2)
    {
        sumDigits = list1[index1] + list2[index2] + carry;
        //stores the to the 2 list and includes the overflow carry value

        if (sumDigits < 10)
        {
            sumArray[index] = sumDigits;
            carry = 0;
        }
        else
        {
            sumArray[index] = sumDigits - 10;
            carry = 1;
        }
        index++;
        index1++;
        index2++;
    }

    if (index1 < numOfElementsList1)
        for (int i = index1; i < numOfElementsList1; i++)
        {
            sumDigits = list1[i] + carry;

            if (sumDigits < 10)
            {
                sumArray[index] = sumDigits;
                carry = 0;
            }
            else
            {
                sumArray[index] = sumDigits - 10;
                carry = 1;
            }
            index++;
        }
    else if (index2 < numOfElementsList2)
        for (int i = index2; i < numOfElementsList2; i++)
        {
            sumDigits = list2[i] + carry;

            if (sumDigits < 10)
            {
                sumArray[index] = sumDigits;
                carry = 0;
            }
            else
            {
                sumArray[index] =  sumDigits - 10;
                carry = 1;
            }
            index++;
          }

        if (index <= DIGITS && carry == 1)
        {
            sumArray[index] = 1;
            index++;
        }
            //print the stuff to user
         cout << "The sum of the numbers is: " << endl;
        if (carry == 1 && index >= DIGITS)
        {
            cout << "The sum of the numbers overflows." << endl;
        }

        for (int i = index - 1; i >= 0; i--)
            cout << sumArray[i];
        cout << endl;
}
