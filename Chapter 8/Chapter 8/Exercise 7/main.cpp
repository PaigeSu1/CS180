
/*
Johnson 5000
Miller 4000
Duffy 6000
Robinson 2500
Ashtony 1800

The Winner of the Elcetion is Dufft

^ example input that is given by the requriments
*/

//header files 
#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;
  
//Proto-Function 'debug list'  
int sumVotes(int list[], int size);
int winnerIndex(int list[], int size);

int main()
{
    string candidates[5]; //storing the string of the 5 people running for elcection
    int votes[5] = {0}; //stores the number of votes that are for each candiate intizlized with {0, 0, 0, 0, 0}
    int totalVotes; //The variable to store the total number of votes
    int i; //counter variable to be used with loop that is set to zero. 

    cout << fixed << showpoint;
    cout << setprecision(2); //how to make the decimal points look pretty 
    //ask for user input 
    cout << "Enter candidate's name and the votes received by " 
         <<"the candidate." << endl;

    //loop to store the candiate and the numbers of votes they have 
    for (i = 0; i < 5; i++) 
        cin >> candidates[i] >> votes[i];

    totalVotes = sumVotes(votes, 5);

    //How to calulate the percent of how much of the vote did this person get 
    cout << "Candidate    Votes Received   % of Total Votes" << endl;
    for (i = 0; i < 5; i++)
        cout << left << setw(10) << candidates[i]
             << right << " " << setw(10) << votes[i] << "   " << setw(15)
             << (static_cast<double>(votes[i]) / static_cast<double>(totalVotes)) * 100 
             << endl; //rember to cast as string and double are not allowed to mix with each other

    cout << "Total            " << totalVotes << endl;

    cout << "The Winner of the Election is " 
         << candidates[winnerIndex(votes, 5)] 
         << "." << endl;

    return 0;
}

//function to find the total number of votes 
int sumVotes(int list[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
		sum = sum + list[i];

	return sum;
}

//function to find the person who has the most # of 
//votes 
//putting in order from largest to smallest 
int winnerIndex(int list[], int size)
{
    int winInd = 0;

    for (int i = 0; i < size; i++)
        if (list[i] > list[winInd])
            winInd = i;

    return winInd;
}