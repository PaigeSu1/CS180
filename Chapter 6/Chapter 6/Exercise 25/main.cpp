 
#include <iostream>
#include <iomanip>

using namespace std;

const double SENIOR_CITIZEN_DISCOUNT = 0.30;
const double TWELVE_OR_MORE_MONTHS_MEMBERSHIP_DISOUNT = 0.15;
const double SIX_OR_MORE_PERSONAL_TRAINING_SESSIONS_DISCOUNT = 0.20;

void setPrices(double& regMemPricePerMth, double& personalTrSesCost);

void getInfo(bool& senCitizen, bool& bSixOrMoreSess, bool& paidTwMnth,
             int& nOfMonths, int& nOfPersonalTrSess);
double membershipCost(double regMemPricePerMth, int nOfMonths,
                      double personalTrSesCost, int nOfPersonalTrSess,
                      bool senCitizen, bool bSixOrMoreSess, bool paidTwMnth);
void displayCenterInfo();


int main()
{
    bool seniorCitizen;
    bool boughtSixOrMoreSessions;
    bool paidTwelveOrMoreMonths;

    int numberOfMembershipMonths;
    int numberOfPersonalTrainingSessions;
    double regularMembershipChargesPerMonth;
    double costOfOnePersonalTrainingSession;

    double memberCost;

    cout << fixed << showpoint << setprecision(2);

    displayCenterInfo();
    setPrices(regularMembershipChargesPerMonth, costOfOnePersonalTrainingSession);
    getInfo(seniorCitizen, boughtSixOrMoreSessions, paidTwelveOrMoreMonths,
            numberOfMembershipMonths, numberOfPersonalTrainingSessions);

    memberCost = membershipCost(regularMembershipChargesPerMonth, 
                                    numberOfMembershipMonths,
                                    costOfOnePersonalTrainingSession, 
                                    numberOfPersonalTrainingSessions,
                                    seniorCitizen, boughtSixOrMoreSessions, 
                                    boughtSixOrMoreSessions);
    cout << "The membership cost = $"
         << memberCost << endl;

    return 0;
}

void displayCenterInfo()
{
    cout << "Welcome to Stay Healty and Fit center." << endl;
    cout << "This program determines the cost of a new membership." << endl;
    cout << "If you are a senior citizen, then the discount is 30% of "
         << "of the regular membership price." << endl;
    cout << "If you buy membership for twelve months and pay today, the "
         << "discount is 15%." << endl;
    cout << "If you buy and pay for 6 or more personal training session today, "
         << "the discount on each session is 20%." << endl;
}

void setPrices(double& regMemPrice, double& personalTrSesCost)
{
    cout << "Enter the cost of a regular membership per month: ";
    cin >> regMemPrice;
    cout << endl;

    cout << "Enter the cost of one personal training session: ";
    cin >> personalTrSesCost;
    cout << endl;
}

void getInfo(bool& senCitizen, bool& bSixOrMoreSess, bool& paidTwMnth,
             int& nOfMonths, int& nOfPersonalTrSess)
{
    char response;

    cout << "Are you a senior citizen (Y,y/N,n): ";
    cin >> response;
    cout << endl;

    if (response == 'Y' || response == 'y')
        senCitizen = true;
    else
        senCitizen = false;

    cout << "Enter the number of personal training sessions bought: ";
    cin >> nOfPersonalTrSess;
    cout << endl;

    if (nOfPersonalTrSess > 5)
        bSixOrMoreSess = true;
    else
        bSixOrMoreSess = false;

    cout << "Enter the number of month you are paying for: ";
    cin >> nOfMonths;
    cout << endl;

    if (nOfMonths >= 12)
        paidTwMnth = true;
    else
        paidTwMnth = false;
}

double membershipCost(double regMemPricePerMth, int nOfMonths,
                      double personalTrSesCost, int nOfPersonalTrSess,
                      bool senCitizen, bool bSixOrMoreSess, bool paidTwMnth)
{
    double cost;

    if (nOfMonths >= 12)
        cost = regMemPricePerMth * nOfMonths * (1 - TWELVE_OR_MORE_MONTHS_MEMBERSHIP_DISOUNT);
    else
        cost = regMemPricePerMth * nOfMonths;

    if (senCitizen)
        cost = cost * (1 - SENIOR_CITIZEN_DISCOUNT);

    if (bSixOrMoreSess)
        cost = cost + personalTrSesCost * nOfPersonalTrSess 
                     * (1 - SIX_OR_MORE_PERSONAL_TRAINING_SESSIONS_DISCOUNT);
    else
         cost = cost + personalTrSesCost * nOfPersonalTrSess;

    return cost;
}