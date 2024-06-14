#include <iostream>

using namespace std; 

const int oneGB = 1073741824;
 
int main()  
{
	int hardDriveSize;
	double hardDriveStorageCapacity; 

	cout << "Enter hard drive size in giga bytes:  ";
	cin >> hardDriveSize;
	cout << endl;

	hardDriveStorageCapacity = hardDriveSize / static_cast<double> (oneGB) * 1000000000;

	cout << "Hard drive size = " << hardDriveSize << " GB" << endl;

	cout << "Actual hard drive storage capacity = " << hardDriveStorageCapacity << " GB" << endl;

	return 0;
}
