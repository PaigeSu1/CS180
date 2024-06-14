 
#include <iostream> 
#include <string>

using namespace std;

void showChoices();  

void twelveHourToTwentyFourHour(int hTwelve, int mTwelve, int sTwelve, string AMorPM,
                                int& hTwentyFour, int& mTwentyFour, int& sTwentyFour);
void TwentyFourHourToTwelveHour(int hTwentyFour, int mTwentyFour , int sTwentyFour, 
                                int& hTwelve, int& mTwelve, int& sTwelve, string& AMorPM);
void getTimeTwelveHour(int& hTwelve, int& mTwelve, int& sTwelve, string& AMorPM);
void getTimeTwentyFourHour(int& hTwentyFour, int& mTwentyFour, int& sTwentyFour);

void print(int hr, int min, int sec, string str, bool isTwelveHr);


int main()
{
    int hrTwelve;
    int minTwelve; 
    int secTwelve; 
    string AMorPM;
    int hrTwentyFour;
    int minTwentyFour; 
    int secTwentyFour;

    int choice;

    do
    {
        showChoices();
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            getTimeTwelveHour(hrTwelve, minTwelve, secTwelve, AMorPM);
            twelveHourToTwentyFourHour(hrTwelve, minTwelve, secTwelve, AMorPM,
                                       hrTwentyFour, minTwentyFour, secTwentyFour);
            print(hrTwentyFour, minTwentyFour, secTwentyFour, "", false);

            break;
        case 2:
            getTimeTwentyFourHour(hrTwentyFour, minTwentyFour, secTwentyFour);
            TwentyFourHourToTwelveHour(hrTwentyFour, minTwentyFour, secTwentyFour, 
                                       hrTwelve, minTwelve, secTwelve, AMorPM);
            print(hrTwelve, minTwelve, secTwelve, AMorPM, true);
            break;

        case 99: 
            break;

        default:
            cout << "Invalid input." << endl;
        }
    }
    while (choice != 99);

    return 0;
 }

void showChoices()
{
    cout << "Enter--" << endl;
    cout << "1: To convert time from 12-hour notation " 
         << "to 24-hour notation." << endl;
    cout << "2: To convert time from 24-hour notation " 
         << "to 12-hour notation." << endl;
    cout << "99: To quit the program." << endl;
}

void getTimeTwelveHour(int& hTwelve, int& mTwelve, int& sTwelve, string& AMorPM)
{
    cout << "Enter hours: ";
    cin >> hTwelve;
    cout << endl;

    cout << "Enter minutes: ";
    cin >> mTwelve;
    cout << endl;

    cout << "Enter seconds: ";
    cin >> sTwelve;
    cout << endl;

    cout << "Enter AM/PM: ";
    cin >> AMorPM;
    cout << endl;
}

void getTimeTwentyFourHour(int& hTwentyFour, int& mTwentyFour, int& sTwentyFour)
{
    cout << "Enter hours: ";
    cin >> hTwentyFour;
    cout << endl;

    cout << "Enter minutes: ";
    cin >> mTwentyFour;
    cout << endl;

    cout << "Enter seconds: ";
    cin >> sTwentyFour;
    cout << endl;
}

void twelveHourToTwentyFourHour(int hTwelve, int mTwelve, int sTwelve, string AMorPM,
                                int& hTwentyFour, int& mTwentyFour, int& sTwentyFour)
{
    if (AMorPM == "AM")
    {
        if (hTwelve == 12)
            hTwentyFour = 0;
        else
            hTwentyFour = hTwelve;
        mTwentyFour = mTwelve;
        sTwentyFour = sTwelve;
    }
    else
    {
        if (hTwelve == 12)
            hTwentyFour = hTwelve;
        else
            hTwentyFour = hTwelve + 12;
        mTwentyFour = mTwelve;
        sTwentyFour = sTwelve;
    }
}

void TwentyFourHourToTwelveHour(int hTwentyFour, int mTwentyFour , int sTwentyFour, 
                                int& hTwelve, int& mTwelve, int& sTwelve, string& AMorPM)
{
    if (hTwentyFour == 0)
    {
       hTwelve = 12;
       mTwelve = mTwentyFour;
       sTwelve = sTwentyFour;
       AMorPM = "AM";
    }
    else if (hTwentyFour < 12)
    {
       hTwelve = hTwentyFour;
       mTwelve = mTwentyFour;
       sTwelve = sTwentyFour;
       AMorPM = "AM";
    }
    else if (hTwentyFour == 12)
    {
       hTwelve = hTwentyFour;
       mTwelve = mTwentyFour;
       sTwelve = sTwentyFour;
       AMorPM = "PM";
    }
    else
    {
        hTwelve = hTwentyFour - 12;
        mTwelve = mTwentyFour;
        sTwelve = sTwentyFour;
        AMorPM = "PM";
    }
}
void print(int hr, int min, int sec, string str, bool isTwelveHr)
{
    cout << "The time is:   ";

    if (hr < 10)
        cout << "0";
    cout << hr << ":";
    
    if (min < 10)
        cout << "0";
    cout << min << ":";
    
    if (sec < 10)
        cout << "0";
    cout << sec;

    if (isTwelveHr)
        cout << " " << str << endl;
    else
        cout << endl;
}