#include <iostream>
#include <fstream>
#include <string> 
#include <iomanip>
using namespace std; 

const string SENTINEL = "-1";  

int main()  
{  
    string name;  
    int numOfVolunteers;  
    int numOfBoxesSold;  
    int totalNumOfBoxesSold;  
    double costOfOneBox;  
    double totalMoneyMade;

    int maxNumOfBoxesSoldByAStudent;
    double amountDonatedToACharity;
    double totalMoneyDonated = 0.0;
    double netMoneyMade;

    ifstream inFile;

    inFile.open("Ch5_Ex19Data.txt");

    if (!inFile)
    {
        cout << "Unable to open the input file. The program terminates!" << endl;
        return 1;
    }

    cout << fixed << showpoint << setprecision(2);   
    
    cout << "Processing data." << endl;    

    totalNumOfBoxesSold = 0; 
    numOfVolunteers = 0; 
    maxNumOfBoxesSoldByAStudent = 0;

    inFile >> costOfOneBox;   
 
    inFile >> name;   

    while (inFile)  
    {   
        inFile >> numOfBoxesSold;  
        totalNumOfBoxesSold = totalNumOfBoxesSold 
                              + numOfBoxesSold;   
        numOfVolunteers++;   

        if (maxNumOfBoxesSoldByAStudent < numOfBoxesSold)
            maxNumOfBoxesSoldByAStudent = numOfBoxesSold;

        inFile >> name;  
    }    

    cout << endl;      

    cout << "The total number of boxes sold: "
         << totalNumOfBoxesSold << endl;    

    totalMoneyMade = totalNumOfBoxesSold * costOfOneBox;
    cout << "The total money made by selling cookies before donating to charity: $" 
         << totalMoneyMade << endl;  

    if (numOfVolunteers != 0) 
        cout << "The average number of boxes sold by each volunteer: "
             << totalNumOfBoxesSold / numOfVolunteers << endl;     
    else            
        cout << "No input." << endl;    

    inFile.close();
    inFile.clear();

    inFile.open("Ch5_Ex19Data.txt");

    if (!inFile)
    {
        cout << "Unable to open the input file. The program terminates!" << endl;
        return 1;
    }


    cout << "The maximum number of boxes sold by an individual student: "
         << maxNumOfBoxesSoldByAStudent << endl;

    amountDonatedToACharity = maxNumOfBoxesSoldByAStudent * costOfOneBox * 0.10;

    cout << "The amount donated to each charity is: " << amountDonatedToACharity << endl;
    cout << "The names of students selling the maximum number of boxes are: " << endl;

    inFile >> costOfOneBox;   
 
    inFile >> name;   

    while (inFile)  
    {   
        inFile >> numOfBoxesSold;  
        
        if (numOfBoxesSold == maxNumOfBoxesSoldByAStudent)
        {
            totalMoneyDonated = totalMoneyDonated + amountDonatedToACharity;

            cout << name << endl;
        }

        inFile >> name;  
    }    

    cout << endl;

    netMoneyMade = totalMoneyMade - totalMoneyDonated;

    cout << "The total money donated to charity: $" << totalMoneyDonated << endl;

    cout << "The net money made from selling girl-scout cookies: $"
         << netMoneyMade << endl;

    return 0;    
} 