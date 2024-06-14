 
#include <iostream>
#include <fstream>
 
using namespace std;

void initialize(int& zeroCount, int& oddCount, int& evenCount);
void getNumber(int& num, ifstream& inputFile, ofstream& outputFile);
void classifyNumber(int num, int& zeroCount, int& oddCount, 
			        int& evenCount);
void printResult(int zeroCount, int oddCount, int evenCount,
				  int sum, int avg, ofstream& outputFile);

int main ()
{
	//variable declaration
   int count = 0; // Loop control variable 
   int number;  // Store the new number 
   int zeros;   // Store the number of zeros 
   int odds;    // Store the number of odd integers 
   int evens;   // Store the number of even integers 

   int sum = 0;
   int average;

   ifstream inFile;
   ofstream outFile;

   inFile.open("Ch6_Ex20Data.txt");

   if (!inFile)
   {
	   cout << "Cannot open input file. Program terminates." << endl;
	   return 1;
   }

   outFile.open("Ch6_Ex20Out.txt");

   initialize(zeros, odds, evens);			

   cout << "Processing Data" << endl;					
   
   getNumber(number, inFile, outFile);

	while (inFile)	
	{
		classifyNumber(number, zeros, odds, evens); 
		count++;
		sum = sum + number;

		if (count % 10 == 0) //Print 10 numbers per line
			outFile << endl;
		getNumber(number, inFile, outFile);
	} 

	if (count != 0)
		average = sum / count;
	else
	{
		cout << "No input. Check input file" << endl;
		return 1;
	}

	outFile << endl;
   
	printResult(zeros, odds, evens, sum, average, outFile);	

	inFile.close();
	outFile.close();

	return 0;
}

void initialize(int& zeroCount, int& oddCount, 
    int& evenCount)
{
	zeroCount = 0;
	oddCount = 0;
	evenCount = 0;
}

void getNumber(int& num, ifstream& inputFile, ofstream& outputFile)
{
	inputFile >> num;

	if (inputFile)
		outputFile << num << " ";
}

void classifyNumber(int num, int& zeroCount, 
			  int& oddCount,	int& evenCount)
{
   switch (num % 2)
   {
   case 0: 
       evenCount++;  
        if  (num == 0)			 
            zeroCount++;  
        break;
   case 1: 
   case -1: 
       oddCount++;	
   } //end switch
}

void printResult(int zeroCount, int oddCount, int evenCount,
				  int sum, int avg, ofstream& outputFile)
{ 
    outputFile << "There are " << evenCount << " evens, "
		       << "which includes " << zeroCount
		       << " zeros" << endl;	
    outputFile << "Total number of odds are: " << oddCount
		       << endl;	
	outputFile << "The sum of numbers = " << sum << endl;
	outputFile << "The average is " << avg << endl;
}
