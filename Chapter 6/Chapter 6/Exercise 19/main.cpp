  	 
#include <iostream>
using namespace std;
 
void getScore(int& score);
char calculateGrade(int score);
 
int main ()
{
	int courseScore;

	cout << "Line 1: Based on the course score, this program"
		 << " computes the course grade." << endl;  				
   
    getScore(courseScore);		

    cout << "The grade is: " << calculateGrade(courseScore) << endl;  	

    return 0;
}

void getScore(int& score)
{
	cout << "Line 4: Enter course score: ";   
	cin >> score;					  
	cout << endl << "Line 6: Course Score is  "
		 << score << endl; 				  
}

char calculateGrade(int cScore)
{
    if (cScore >= 90)				
	   return 'A';
	else if (cScore >= 80)
        return 'B';
	else if (cScore >= 70)
        return 'C';
	else if (cScore >= 60)
        return 'D';
	else
		return 'F';
 }