  
#include <iostream>
#include <string>

using namespace std;

void countVowels(char ch, int& aCt, int& eCt, int& iCt,
                 int& oCt, int& uCt);

int main()
{
	string inputString;

    int aCount = 0;
    int eCount = 0;
    int iCount = 0;
    int oCount = 0;
    int uCount = 0;

    cout << "Enter a string: " << endl;
    getline(cin, inputString);

    for (unsigned int i = 0; i < inputString.length(); i++)
        countVowels(inputString.at(i), aCount, eCount, 
                    iCount, oCount, uCount);
    
    cout << "The number of a's: " << aCount << endl;
    cout << "The number of e's: " << eCount << endl;
    cout << "The number of i's: " << iCount << endl;
    cout << "The number of o's: " << oCount << endl;
    cout << "The number of u's: " << uCount << endl;

	return 0;
}
 
void countVowels(char ch, int& aCt, int& eCt, int& iCt,
                 int& oCt, int& uCt)
{
        switch (ch)
        {
        case 'a': 
                aCt++;
                break;
        case 'e':
                eCt++;
                break;
        case 'i': 
                iCt++;
                break;
        case 'o':
                oCt++;
                break;
        case 'u': 
                uCt++;
    }
}
