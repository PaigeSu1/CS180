//Header files  
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

//number of questions on test that dose not change
const int NO_OF_QUESTIONS = 20;

//ProtoType function 'debug list'
char examGrade(int score);

int main()
{
    char keyString[NO_OF_QUESTIONS + 1];
    char answerString[NO_OF_QUESTIONS + 1];
    char ID[9]; //the studnet ID are 9 char long
    char ch; //representing a char spot

    int score;
    int len;
    ifstream infile; //import a file into the program

    int i; //counter var.

    infile.open("Ch8_Ex6Data.txt"); //how to open a file
    if (!infile) //if file name is wrong/dne return an error message to the user
    {
        cout << "Cannot open the input file. Program terminates!"
             << endl;
        return 1;
    }

    //output format 
    cout << "Processing Data" << endl;
    infile.get(keyString, 21);
    //output format 
    cout << "Key: " << keyString << endl;
	
    infile >> ID; //go into file and find student ID
    infile.get(ch); //Find the character for true or false anser
    infile.get(answerString, 21); // how lone the answer string needs to be

    while (infile) //while reading the file when has data
    {
        len = strlen(answerString); //calulates the length of ans str, ising strlen function
        for (i = len; i < 20; i++) //makes ans str have 20 spaces
            answerString[i] = ' ';//if a question unanswered add a space to count 

        answerString[20] = '\0';
		
        score = 0;
		
        for (i = 0; i < 20; i++) //looping thrgough the answer string answer
            if (answerString[i] != ' ') {
                if (answerString[i] == keyString[i])
                    score = score + 2; //if the answer is correct add 2 points
                else
                    score = score - 1; //if the anser is incorrect subtract a 1 point
	    }

        //Print out the ID, students answers, and the score they got reading the data from 
        //the file. storing it in the var. answerstring
        cout << ID << " " << answerString << "  " << score
             << "  " << examGrade(score) << endl;
        infile >> ID;
        infile.get(ch);
    infile.get(answerString, 21);
    }

    cout << endl;

    infile.close(); //close the file when donw

    return 0;
}

//Function getting exam grade
char examGrade(int score)
{
    //uses a switch case with grades within ranges give in the 
    //reqiurments
    switch (static_cast<int>(score / 40.0 * 10))
    {
    case 0: 
    case 1: 
    case 2: 
    case 3:
    case 4: 
    case 5: 
        return 'F';
    case 6: 
        return 'D';
    case 7: 
        return 'C';
    case 8: 
        return 'B';
    case 9: 
    case 10: 
        return 'A';
    default: 
        return 'F';
	}
}
