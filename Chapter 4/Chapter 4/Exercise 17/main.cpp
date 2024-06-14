#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

int main()
{
    double priceColonial;
    double priceSplitEntry;
    double priceSingleStory;

    double finishedAreaColonial;
    double finishedAreaSplitEntry;
    double finishedAreaSingleStory;

    double pricePerSquareFootColonial;
    double pricePerSquareFootSplitEntry;
    double pricePerSquareFootSingleStory;

    string houseName;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the price of colonial model: ";
    cin >> priceColonial;
    cout << endl;

    cout << "Enter the finished area in square feet of colonial model: ";
    cin >> finishedAreaColonial;
    cout << endl;

    pricePerSquareFootColonial = priceColonial / finishedAreaColonial;

    cout << "Enter the price of split entry model: ";
    cin >> priceSplitEntry;
    cout << endl;

    cout << "Enter the finished area in square feet of split entry model: ";
    cin >> finishedAreaSplitEntry;
    cout << endl;

    pricePerSquareFootSplitEntry = priceSplitEntry / finishedAreaSplitEntry;

    cout << "Enter the price of single story model: ";
    cin >> priceSingleStory;
    cout << endl;

    cout << "Enter the finished area in square feet of single story model: ";
    cin >> finishedAreaSingleStory;
    cout << endl;

    pricePerSquareFootSingleStory = priceSingleStory / finishedAreaSingleStory;

    if (pricePerSquareFootColonial < pricePerSquareFootSplitEntry)
    {
        if (pricePerSquareFootColonial < pricePerSquareFootSingleStory)
            cout << "The price per square foot of the colonial "
                 << "model is the least." << endl; 
        else if (pricePerSquareFootColonial > pricePerSquareFootSingleStory)
            cout << "The price per square foot of the single-story "
                 << "model is the least." << endl; 
        else 
            cout << "The price per square foot of the colonial and single-story models tie for the least." << endl;
    }
    else if (pricePerSquareFootColonial > pricePerSquareFootSplitEntry)
    {
        if (pricePerSquareFootSplitEntry < pricePerSquareFootSingleStory)
            cout << "The price per square foot of the split-entry "
                 << "model is the least." << endl; 
        else if (pricePerSquareFootSplitEntry > pricePerSquareFootSingleStory)
            cout << "The price per square foot of the single story "
                 << "model is the least." << endl; 
        else 
            cout << "The price per square foot of the single-story and split-entry models tie for the least." << endl;
    }
    else
    {
        if (pricePerSquareFootColonial == pricePerSquareFootSingleStory)
            cout << "The price per square foot all three "
                 << "models are the same." << endl;
        else if (pricePerSquareFootColonial > pricePerSquareFootSingleStory)
            cout << "The price per square foot of the single story "
                 << "model is the least." << endl;
        else 
            cout << "The price per square foot of the colonial and split-entry models tie for the least." << endl;
    }
  
    return 0;
}