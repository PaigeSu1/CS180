#include <iostream>
//Header files
using namespace std;
//Var. that will not change
const int NUMBER_OF_COOKIES_IN_BOX = 24;
const int CONTAINER_CAPACITY = 75;

int main()
{
    //Initialize var. that are subject to change
	int numberOfCookies;
    int numberOfBoxes;
    int numberOfContainers; 
    int leftoverCookies;
    int leftoverBoxes;
 //ask user how many cookies are present
	cout << "Enter the total number of cookies: ";
	cin >> numberOfCookies;
	cout << endl;
    //Do the cookie math and no fraction of cookie are allowed
	numberOfBoxes = numberOfCookies / NUMBER_OF_COOKIES_IN_BOX;
    leftoverCookies = numberOfCookies % NUMBER_OF_COOKIES_IN_BOX;

    numberOfContainers = numberOfBoxes / CONTAINER_CAPACITY;
    leftoverBoxes = numberOfBoxes % CONTAINER_CAPACITY;

    cout << "The number of cookie boxes needed to hold the cookies: "
         << numberOfBoxes << endl;

    //Nested if and 2 if statements shown that are not in a loop
    if (leftoverCookies > 0)
        cout << "Leftover cookies: " << leftoverCookies << endl;

    cout << "The number of containers needed to store the cookie boxes: "
         << numberOfContainers << endl;
    if (leftoverBoxes > 0)
        cout << "Leftover boxes: " << leftoverBoxes << endl;
    //print the result out to the user
	return 0;
}