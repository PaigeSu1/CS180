#include <iostream>

using namespace std; 
  
int main()
{
	double mass1;
    double mass2;
    double distance;

    double force;

    cout << "Enter the mass of the first body: ";
    cin >> mass1;
    cout << endl; 

    cout << "Enter the mass of the second body: ";
    cin >> mass2;
    cout << endl;

    cout << "Enter the distance between the two bodies: ";
    cin >> distance;
    cout << endl;

    force = (6.67 / 100000000) *(mass1 * mass2 / (distance * distance)) ;

    cout << "The force between the two bodies = " << force << endl;

	return 0;
}