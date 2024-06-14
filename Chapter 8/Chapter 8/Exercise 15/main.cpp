/* 
   10 17 23 65 34 6 18 27 35 110 75 25 100 24 19 67 45 88 70 96 41 36 72 150 125 25 77 
   200 90 166 139 55 31 8 29 119 126 137 34 62 135 121 108 197 45 35 24 1 16 43
   */
//header file
#include <iostream>
using namespace std;

const int LIST_SIZE = 50;

void selectionSort(int list[], int length);

int main()
{
    int list[50];

    cout << "Enter " << LIST_SIZE << " integers: ";
    for (int i = 0; i < LIST_SIZE; i++)
        cin >> list[i];
    cout << endl;

    selectionSort(list, LIST_SIZE);

    for (int i = 0; i < LIST_SIZE; i++)
    {
        cout << "list[" << i << "] = " << list[i] << " is the sum of: ";
        for (int j = 0; j < LIST_SIZE; j++)
            for (int k = j + 1; k < LIST_SIZE; k++)
                if (list[i] == list[j] + list[k])
                    cout << "list[" << j << "], list[" << k << "]; ";
        cout << endl;
        cout << "----------------------" << endl;;
    }

    return 0;
}

//what has been made different from problem 14 to 15 
//use a slection sorting alorigirthm to slove this problem 
void selectionSort(int list[], int length)
{
    //local variables
    int index;
    int smallestIndex;
    int location;
    int temp;

    //always remeber the length -1 rule with array sorting to avoid out of bounds
    for (index = 0; index < length - 1; index++)
    {
       //Step a sort the list into order ex 1, 2, 3, 4, 5, ect....
        smallestIndex = index;
        //comparte the vaule and loaction of item in the list
        for (location = index + 1; location < length; location++)
            if (list[location] < list[smallestIndex])
                smallestIndex = location;

        //Step b //use a temp list to store the values from the process of sorting then,
        //put into program and run. 
        temp = list[smallestIndex];
        list[smallestIndex] = list[index];
        list[index] = temp;
    }
}