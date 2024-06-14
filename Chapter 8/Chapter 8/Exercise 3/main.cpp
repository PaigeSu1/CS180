#include <iostream> 
using namespace std;

const int ARRAY_SIZE = 15;

void printArray(const int x[], int sizeX);
int lastLargestIndex(const int x[], int sizeX);

int main()
{
	int list[ARRAY_SIZE];							

    cout << "Enter 15 integers: " << endl;
    int i = 0;
    while(i < 15) {
        cin >> list[i];
        ++i;
    }
	printArray(list, ARRAY_SIZE);					
	cout << endl;						

	//The DIFFERENCE of this Program is to find the largest elemtment and postion in list. 
	cout << "The position of the last occurrence of the largest "
        << "element in list is: "
		 << lastLargestIndex(list, ARRAY_SIZE) << endl;											
	cout << "The largest element in list is: "
		 << list[lastLargestIndex(list, ARRAY_SIZE)]
		 << endl << endl;									

	return 0;
}

//Function to print the array
void printArray(const int list[], int listSize)
{
    int index;

    for (index = 0; index < listSize; index++)
        cout << list[index] << " ";
}
	


	// Function to find and return the index of the 
	// smallest element of an array 
int lastLargestIndex(const int list[], int listSize)
{
	int counter;
  	int maxIndex = listSize - 1; //General rule when find the largest of list always -1 to not go out of bounds 
								//Assume first element is the smallest

	for (counter = listSize - 1; counter >= 0; counter--) // searching the user entered array going backwards
	   if (list[maxIndex] < list[counter]) 
			maxIndex = counter; //this saves were the largest index[5] value was found within the program
	return maxIndex; //When loop as gone through whole list return the maxIndex. 
}