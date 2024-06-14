#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
    double billingAmount = 0.0;
    int numOfItemsOrdered;
    double shippingAndHandlingFee = 0.0;
    double price;
    int count;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the number of items ordered: ";
    cin >> numOfItemsOrdered;
    cout << endl;

    for (count = 1; count <= numOfItemsOrdered; count++)
    {
        cout << "Enter the price of item no. " << count << ": ";
        cin >> price;
        cout << endl;

        billingAmount = billingAmount + price;
    }

    if (billingAmount < 200)
		shippingAndHandlingFee = 10 * numOfItemsOrdered;

    billingAmount = billingAmount + shippingAndHandlingFee;

    cout << "The shipping and handling fee is: $" << shippingAndHandlingFee << endl;

    cout << "The billing amount is: $" << billingAmount << endl;
        
	return 0;
}
