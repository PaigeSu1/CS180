//Header files 
#include <iostream> 
using namespace std; 

//making an array that will not change 
const int ARRAY_SIZE = 15;

//ProtoType Functions 
void printArray(const int x[], int sizeX);
int smallestIndex(const int x[], int sizeX);

int main()
{

    int list[ARRAY_SIZE];	//this makes a blank list with 15 place holders 		

    cout << "Enter 15 integers: " << endl;
	//Ask the user to enter 15 integers 
    int i = 0; //While loop counter varaible 
    while(i < 15) { 			//While i is less than 15 
        cin >> list[i]; 		//Save the user input into the new blank list spot.
        ++i;					//add one more to the counter
    }
	printArray(list, ARRAY_SIZE);	//print out the user entered array list 		
	cout << endl;													

	cout << "The position of the first occurrence of the smallest "
        << "element in list is: "
		 << smallestIndex(list, ARRAY_SIZE) << endl;		//call the find smallest Index function and smallest element functions 								
	cout << "The smallest element in list is: "
		 << list[smallestIndex(list, ARRAY_SIZE)]
		 << endl << endl;									

	return 0;
}

//Function to print the array (void nothing printed out here)
void printArray(const int list[], int listSize)
{
    int index; //the location within the array [0,1,2,3,4]

    for (index = 0; index < listSize; index++) //while the index is = 0, then ex: 0 < 15(user entered list size), add one to index
        cout << list[index] << " ";  //print the list at that index untill the for loop condtions trun false
}
	

	// Function to find and return the index of the //postion/loaction spot
	// smallest element of an array //find what number is actually is smallest
int smallestIndex(const int list[], int listSize)
{
	int counter; //Loacl counter in smallestIndex
  	int minIndex = 0; //Assume first element is the smallest

	for (counter = 1; counter < listSize; counter++) //we use minIndex to have the first vaule as its own, then counter is set to one by, 
	   if (list[minIndex] > list[counter]) //to compare the minIndex = smallest number with the postion of were it's loacted in the list
			minIndex = counter; // if the IF statment is true, then assaigen minIndex to the new couter,
	return minIndex; //keep going untill the function is false. 
}