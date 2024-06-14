//First write all the necessary headers
#include <iostream>
#include <iomanip>
using namespace std;

//Write global variable
const double PI = 3.1419;

//Write all the prototypes above main function 'debug function'
double rectangle(double l, double w);
double circle(double r);
double cylinder(double bR, double h);

//Write main function
int main()
{
    //If the variable is used at mltiple places inside function then
    //write that variable at the top.
    double radius;
    double height;
    
    //Variable to store the user's choice should be written before
    //asking the user's choice.
    int choice;
    
    //Display menu to get the user's choice
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "This program can calculate the area of a rectangle,"
         << "the area of a circle, or volume of a cylinder." << endl;
    cout << "To run the program enter: " << endl;
    cout << "1: To find the area of rectangle." << endl;
    cout << "2: To find the area of circle." << endl;
    cout << "3: To find the volume of a cylinder." << endl;
    cout << "-1: To terminate the program." << endl;
    
    //Store the user's choice to the choice variable.
    cin >> choice;
    cout << endl;
    
    
    //condition of while statement should be (choice != -1)
    //instead of (choice == -1)
    while(choice != -1){
        
        //Perform operation using switch statement
        switch(choice){
            case 1://Perform operation for choice 1 (Rectangle)
                double length, width;
                cout << "Enter the length and the width "
                     << "of the rectangle: ";
                cin >>length >> width;
                cout << endl;
                
                cout << "Area = " << rectangle(length, width) << endl;
                break;
                
            case 2://Perform operation for choice 2 (Circle)
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                cout << endl;
                
                cout << "Area = " << circle(radius) << endl;
                break;
                
            case 3://Perform operation for choice 3 (Cylinder)
                cout << "Enter the radius of the base and the "
                     << "height of the cylinder: ";
                cin >> radius >> height;
                cout << endl;
                
                cout << "Area = " << cylinder(radius, height) << endl;
                break;
            
            default:
                cout << "Invalid choice!" << endl;
        }
        
        //At the end of the while statement, again display the menu and take user's choice
        cout << "To run the program enter: " << endl;
        cout << "1: To find the area of rectangle." << endl;
        cout << "2: To find the area of a circle." << endl;
        cout << "3: To find the volume of a cylinder." << endl;
        cout << "-1: To terminate the program." << endl;
        cin >> choice;
        cout << endl;
        
    }

    return 0;
}

//Write all the other supporting function after main
double rectangle(double l, double w)
{
    //Write l*w instead of l*r
    return l * w;
}

double circle(double r)
{
    //Write PI*r*r instead of PI*r*w
    return PI * r * r ;
}

double cylinder(double bR, double h){
    
    //Write PI*bR*bR*h instead of  PI*bR*bR*l
    return PI *bR * bR * h ;
}