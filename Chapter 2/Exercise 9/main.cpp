#include <iostream>

using namespace std; 

int main()
{ 
	double test1, test2, test3, test4, test5;
 
	double average; 

	cout << "Enter five test scores: ";
	cin >> test1 >> test2 >> test3 >> test4 >> test5;
	cout << endl;

	average = (test1 + test2 + test3 + test4 + test5) / 5.0;

	cout << "Average test score: " << average << endl;

	return 0;
}