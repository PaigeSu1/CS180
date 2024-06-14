  
#include <iostream>
#include <fstream>

using namespace std;
 
int main() 
{
	int counter;
	int sum;
	int num;
	ifstream infile;

	infile.open("Exp_5_24.txt");

	if (!infile)
	{
		cout << "Cannot open the input file!" << endl;
		return 0;
	}

    counter = 0;                            //Line 1
	infile >> num;                          //Line 2
	while (infile)                          //Line 3
	{                                       //Line 4
		sum = 0;                            //Line 5
		while (num != -999)                 //Line 6
		{                                   //Line 7
		    sum = sum + num;                //Line 8
			infile >> num;                  //Line 9 
		}                                   //Line 10

		counter++;                          //Line 11    
	    cout << "Line " << counter 
		     << ": Sum = " << sum << endl;  //Line 12     
		infile >> num;                      //Line 13
	}                                       //Line 14

	return 0;
}