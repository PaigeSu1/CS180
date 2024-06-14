#include <iostream>
 
using namespace std; 

const double SERVICE_CHARGES = 0.015;
 
int main() 
{
	double stockBuyPricePerShare;
    double stockSellPricePerShare;

    double stockPurchasePrice;
    double stockSellPrice;

    double serviceChargesBuy;
    double serviceChargesSell;

    int sharesSold;

    cout << "Enter the buying price of each share: ";
    cin >> stockBuyPricePerShare;
    cout << endl;

    cout << "Enter the selling price of each share: ";
    cin >> stockSellPricePerShare;
    cout << endl;

    cout << "Enter the number of shares sold: ";
    cin >> sharesSold;
    cout << endl;

    serviceChargesBuy = stockBuyPricePerShare * sharesSold * SERVICE_CHARGES;
    serviceChargesSell = stockSellPricePerShare * sharesSold * SERVICE_CHARGES;

    stockPurchasePrice = stockBuyPricePerShare * sharesSold + serviceChargesBuy;
    stockSellPrice = stockSellPricePerShare * sharesSold - serviceChargesSell;

    cout << "Total amount invested: $ " << stockPurchasePrice << endl; 
    cout << "Total amount received: $ " << stockSellPrice << endl; 
    cout << "Total service charges: $ " 
         << (serviceChargesBuy + serviceChargesSell) << endl;

    cout << "Amount gained or lost: $" 
         << (stockSellPrice - stockPurchasePrice) << endl;
    
	return 0;
}