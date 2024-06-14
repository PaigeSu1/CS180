#include <iostream>
#include <string>

using namespace std;  
    
int main()
{
    string name;
    double studyHours;

    cout << "Enter first name: ";
    cin >> name;
    cout << endl;

    cout << "Enter study hours: ";
    cin >> studyHours;
    cout << endl;

    cout << "Hello, " << name << "! On Saturday, you "
        << "need to study " << studyHours
        << " hours for the exam." << endl;

	return 0;
}