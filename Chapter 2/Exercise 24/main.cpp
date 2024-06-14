//perimeter of the picture frame = length of the wire.
//permieter = 2 * (length + width) = 2 * (1.5 width + width)
//          = 5.0 width.
// width = perimeter / 5.0 = wireLength / 5.0;

#include <iostream>

using namespace std; 
  
int main()
{
	double wireLength;
    double width;
	
	cout << "Enter the length of the wire: ";
	cin >> wireLength;
	cout << endl;

    width = wireLength / 5.0;

	cout << "Frame length: " << 1.5 * width << endl;
	cout << "Frame width: " << width << endl;

	return 0;
}