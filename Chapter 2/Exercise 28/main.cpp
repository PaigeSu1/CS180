
#include <iostream>

using namespace std;

const double FRUIT_NUT_CALORIES_RATIO = 0.70;
  
int main()
{
	int numberOfStudents;
    double caloriesPerStudent; 
    double totalCalories;
    double caloriesPerPoundNut;
    double caloriesPerPoundDryFruit;
    double caloriesPerPoundMixture;
    double totalMixtureNeeded;
    
    cout << "Enter the number of students in the schools: ";
	cin >> numberOfStudents;
	cout << endl;

    cout << "Enter the calories required for each student: ";
	cin >> caloriesPerStudent;
	cout << endl;

    cout << "Enter calories in one pound of nuts: ";
	cin >> caloriesPerPoundNut;
	cout << endl;

    caloriesPerPoundDryFruit = caloriesPerPoundNut / FRUIT_NUT_CALORIES_RATIO;
    caloriesPerPoundMixture = (caloriesPerPoundNut + caloriesPerPoundDryFruit) / 2.0;

    totalCalories = numberOfStudents * caloriesPerStudent;
	cout << endl;

    totalMixtureNeeded = totalCalories / caloriesPerPoundMixture;

    cout << "Dry fruits mixture: " << totalMixtureNeeded / 2 << " pounds." << endl;
    cout << "Nuts mixture: " << totalMixtureNeeded / 2 << " pounds." << endl;

	return 0;
}