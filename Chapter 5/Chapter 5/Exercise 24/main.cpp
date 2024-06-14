  
#include <iostream>
#include <fstream>
 
using namespace std;

int main() 
{
	int counter;
	int sum;
	int num;
	ifstream infile;

	infile.open("Exp_5_23.txt");

	if (!infile)
	{
		cout << "Cannot open the input file!" << endl;
		return 0;
	}

    counter = 0;                            //Line 1
	while (counter < 5)                     //Line 2
	{                                       //Line 3
		sum = 0;                            //Line 4
		infile >> num;                      //Line 5
		while (num != -999)                 //Line 6
		{                                   //Line 7
			sum = sum + num;                //Line 8
			infile >> num;                  //Line 9 
		}                                   //Line 10

        counter++;                          //Line 11
        cout << "Line " << counter 
             << ": Sum = " << sum << endl;  //Line 12
	}                                       //Line 13

	return 0;
}