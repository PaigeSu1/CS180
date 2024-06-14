#include <iostream>
#include <iomanip>
using namespace std; 

const double CUBIC_CENTIMETERS_IN_ONE_GALLON = 3785.41;

const double CENTIMETERS_IN_ONE_KILOMETER = 100000.00;

double oilSlickArea(double oilThick, 
                    double oilReleasedRate, double spilTimeInHours);

int main()
{
    double oilThickness;
    double oilReleasedGallonsPerMinute;

    int slickDays;

    double spillArea = 0.0;

    cout << fixed << showpoint << setprecision(8);

    cout << "Enter the oil spill rate per minute (in gallons): ";
    cin >> oilReleasedGallonsPerMinute;
    cout << endl;

    cout << "Enter oil thickness on top of the water (in centimeters): ";
    cin >> oilThickness;
    cout << endl;

    cout << "Enter the number of days for which you want to know " 
         << "the area covered by the spilled oil: ";
    cin >> slickDays;
    cout << endl;

    cout << "Oil slick area after each day for " << slickDays << "days."
         << endl << endl;

    cout << setw(5) << "    " << setw(20) << left << "Slick Area in"
         << setw(20) << left << " Volume of Oil in" << endl;
    cout <<  setw(5) << left << "Day " << setw(20) << left << "Square Kilometers"
         << setw(20) << left << " in Gallons" << endl;

    for (int i = 1; i <= slickDays; i++)
    {
        spillArea = spillArea + oilSlickArea(oilThickness, 
                                oilReleasedGallonsPerMinute, 60 * 24);

        cout << setw(4) << left << i << "    " << setw(12) 
             << setprecision(8) << spillArea / (CENTIMETERS_IN_ONE_KILOMETER * CENTIMETERS_IN_ONE_KILOMETER)
             << "   " << setprecision(2) 
             << right << setw (15) << (oilReleasedGallonsPerMinute * 60 * 24 * i) << endl;
    }

   return 0;
}

double oilSlickArea(double oilThick, 
                    double oilReleasedRate, double spilTimeInHours)
{
    double oilVolumeInGallons;
    double oilVolumeInCubicCentimeters;

    double spillArea;

    oilVolumeInGallons = oilReleasedRate * spilTimeInHours;
    oilVolumeInCubicCentimeters = oilVolumeInGallons * CUBIC_CENTIMETERS_IN_ONE_GALLON;
    spillArea = oilVolumeInCubicCentimeters / oilThick;

    return spillArea;
}



/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    int number, choice, power, sum = 0; // Declare sum variable outside of switch statement
    
    srand(time(0)); // Seed the random number generator with the current time
    
    // Generate a random two-digit positive integer
    number = rand() % 90 + 10;
    cout << "Generated number: " << number << endl;
    
    
    // Ask the user which operation they want to perform
    cout << "Choose an operation to perform:" << endl;
    cout << "1. Double the number" << endl;
    cout << "2. Reverse the digits of the number" << endl;
    cout << "3. Raise the number to the power of 2, 3, or 4" << endl;
    cout << "4. Sum the digits of the number" << endl;
    cout<< "Enter your choice: ";
    cin >> choice;


    // Perform the chosen operation
    switch (choice) {
        case 1:
            number *= 2;
            cout << "Doubled number: " << number << endl;
            break;
        case 2:
            number = (number % 10) * 10 + (number / 10);
            cout << "Reversed number: " << number << endl;
            break;
        case 3:
            cout << "Choose a power (2, 3, or 4): ";
            cin >> power;
            number = pow(number, power);
            cout << "Number raised to the power of " << power << ": " << number << endl;
            break;
        case 4:
            while (number > 0) {
                sum += number % 10;
                number /= 10;
            }
            cout << "Sum of digits: " << sum << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
    return 0;
}
*/