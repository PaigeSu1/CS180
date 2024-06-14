
#include <iostream>

using namespace std;
  
int main()
{
	double doorLength;
    double doorWidth;
    double window1Length;
    double window1Width;
    double window2Length;
    double window2Width; 
    double bookShelfLength;
    double bookShelfWidth;
    double roomLength;
    double roomWidth;
    double roomHeight;

    double paintArea;
    double oneGallonPaintArea;

    double amountOfPaintNeeded;
	
	cout << "Enter the length and width of the door: ";
	cin >> doorLength >> doorWidth;
	cout << endl;

    cout << "Enter the length and width of the first window: ";
	cin >> window1Length >> window1Width;
	cout << endl;

    cout << "Enter the length and width of second window: ";
	cin >> window2Length >> window2Width;
	cout << endl;

    cout << "Enter the length and width of the bookshelf: ";
	cin >> bookShelfLength >> bookShelfWidth;
	cout << endl;

    cout << "Enter the length, width, and height of the room: ";
	cin >> roomLength >> roomWidth >> roomHeight;
	cout << endl;

    cout << "Enter the area that can be painted in one gallon of paint: ";
    cin >> oneGallonPaintArea;
    cout << endl;

    paintArea = 2 * roomLength * roomHeight + 2 * roomWidth * roomHeight 
                - doorLength * doorWidth - window1Length * window1Width 
                - window2Length * window2Width - bookShelfLength * bookShelfWidth;

    amountOfPaintNeeded = paintArea / oneGallonPaintArea;

    cout << "The amount of paint needed to paint the room: "
         << amountOfPaintNeeded << " gallons." << endl;

	return 0;
}