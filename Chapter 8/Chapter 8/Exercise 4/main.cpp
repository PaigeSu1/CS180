//Header files  
#include <iostream> 
#include <iomanip> //mainpulation of output within the program
#include <fstream> //How to help open files
using namespace std;
 
//ProtoType Functions 'Debug list' 
void readData(ifstream& inputFile, int list[], int size);
void print(int list[], int size);

int main()
{
	//initializer a list of socres that have 8 postion filled in with zeros {0, 0, 0, 0, 0, 0, 0, 0,};
    int scores[8] = {0};

	//How to import a file into program
    ifstream infile;
    infile.open("Ch8_Ex4Data.txt"); //how to open and read the file within the program

	if (!infile) //Error breaker if file name dose not exist or is entered wrongly within the code
	{
		cout << "Cannot open the input file. Program terminates!" << endl;
		//send error message to the user
		return 1;
	}

	//Calling Functions to complete tasks 
	readData(infile, scores, 8);
	print(scores, 8);
	cout << endl;

	infile.close(); //close the file when program is done running 
	return 0; //must always have within the main 
}

//Function 
void readData(ifstream& inputFile, int list[], int size)
{
	//items that are being looked at within the file
	int score; //socres of test students got
	int index; // the list postion [3] of where that score is loactated 

	inputFile >> score; //Take the data in the file and store that into the var score

	while (inputFile) //While there is input in the file 
	{
		index = score / 25; //start from index and dividie by 25

		if (index == size) //if file index is eqaul to size
			index--; //subtract 1 from the index
		if (index < size) //if the file is less than size 
			list[index]++; // incress the index postion in the list by 1

		inputFile >> score; //store the inputFile data into the varaible score
	}
}

//Functoin print 
void print(int list[], int size)
{
	//loacl variables inzilation 
    int range; //counter variaable 
    int lowRange = 0; //lowerst from first given requriment
    int upperRange = 24; //Highest from fist given requirment

    cout << "   Range       # of Students" << endl; //return the result to the user from output formating readabilty 


    for (range = 0; range < size; range++) //for loop range starts at 0, while range is less than size(list, add one to the range counter)
    {
        cout << setw(3) << lowRange << " - " << setw(3)
             << upperRange << setw(15)
             << list[range] << endl;
        lowRange = upperRange + 1; // means :: 0 = 24 +1 = New UpperRange value of 25
        upperRange = upperRange + 25; // means :: 25 = 25+ 25 = 50 of new value
        if (range == size - 2) //if the range is the same as size subtact 2 from the range 
            upperRange++; //and add one to UpperRange
    }
    cout << endl;
}