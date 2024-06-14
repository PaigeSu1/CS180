//Header files 
#include <iostream>
#include <iomanip> 
using namespace std;

//Protype Function list "Debug functions"
void initialize(double list[], int size);
void print(double list[], int size);

int main()
{	
	//Make a list of 50 spots with the data type value 
    double alpha[50];

    initialize(alpha, 50); //calls the initialize function 
    print(alpha, 50); // call the print function for the list 
    return 0;
}

//function 
void initialize(double list[], int size)
{
	int count; //local counter var.

	for (count = 0; count < 25; count++) // when count is less than 25 square the count 
		list[count] = count * count; //repsent the squaring of a number 

	for (count = 25; count < size; count++) // When the count is equal to 25 is count is less than size, then
		list[count] = 3 * count; //square the count by 3 
}

void print(double list[], int size)
{
	int countp; //local count variable in print function 

	for (countp = 0; countp < size; countp++) //for loop to when countp is eqaul to zero, count is less than size of list add 1 to count
	{
		cout << setw(4) << list[countp] << " "; //what the setw means is, setting somthing of 4 values in the shown in the output 
		if ((countp + 1) % 10 == 0)
			cout << endl;
	}
	cout << endl;
}