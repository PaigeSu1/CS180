/* 
 67 45 23 78 11 94 120 67 100 110 80 45 77 29 30 150 145 28 74 56 73 84 129 116 32 99 84 72 
 111 53 80 94 67 95 145 80 36 76 90 91 116 126
*/
//Header files
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//prototype function 'debug' list 
double findMean(double list[], int numOfElements);
double findStdDev(double list[], int numOfElements);
  
int main()
{
	double numList[100]; //a list that it empty with a 100 blanck sopts to be filled 

    int count;  //total numbers read

    cout << fixed << showpoint << setprecision(2); //How to make the decimal to look pretty 

    cout << "Enter at most 100 numbers. " << endl
         << "After entering the last number " << endl 
         << "type z and press the enter key."
         << endl;
    
    count = 0;
    
    while (count < 100 && cin) //while the list is less than 100 and saved values add 1 to count 
    {
        cin >> numList[count];
        if (cin)
            count++;
    }
    cout << endl;

    cout << "************  count " << count << endl;

    for (int i = 0; i < count; i++)
        cout << numList[i] << " ";
    cout << endl;

    //calls the mean functino 
    cout << "The mean of the numbers is: "
         << findMean(numList, count)
         << endl;
    //calls the Standard Deviation function 
    cout << "The standard deviation of the numbers is: "
         << findStdDev(numList, count)
         << endl;

	return 0;
}

//function to find the mean
double findMean(double list[], int numOfElements)
{
    int index;
    double sum = 0;
    //loop through the list get the sum then divide by the 
    //numbers of elemesnts which equal = ans 
    for (index = 0; index < numOfElements; index++)
        sum = sum + list[index];

	return sum / numOfElements;
}

//functino to find standard deviation 
double findStdDev(double list[], int numOfElements)
{
	double mean = findMean(list,  numOfElements);
    double numerator;
    double stdDev;

    int index;

    numerator = 0;

    for (index = 0; index < numOfElements; index++)
        numerator = numerator + pow(list[index] - mean, 2);

    //standard Devication formula 
    stdDev = sqrt(numerator / numOfElements);

	return stdDev;
}
