#include <iostream>
#include <iomanip>
using namespace std;

const double TEN_TO_NINTEEN_ROOMS_DIS = 0.10;
const double TWENTY_TO_TWENTYNINE_ROOMS_DIS = 0.20;
const double THIRTY_OR_MORE_ROOMS_DISC = 0.30;
const double THREE_DAYS_ROOM_DISC = 0.05;

int main() 
{
	double roomRent;
    double totalRoomsCost;
    int numOfRoomsBooked;
    int numOfDaysRoomsBooked;
    double salesTax;
    double discount = 0.0;

    double billingAmount;

    cout << fixed << showpoint << setprecision(2);
   
    cout << "Enter the cost of renting one room: ";
    cin >> roomRent;
    cout << endl;

    cout << "Enter the number of rooms booked: ";
    cin >> numOfRoomsBooked;
    cout << endl;

    cout << "Enter the number of days the rooms are booked: ";
    cin >> numOfDaysRoomsBooked;
    cout << endl;

    cout << "Enter sales tax as a percent: ";
    cin >> salesTax;
    cout << endl;

    if (10 <= numOfRoomsBooked && numOfRoomsBooked <= 19)
        discount = TEN_TO_NINTEEN_ROOMS_DIS;
    else if (20 <= numOfRoomsBooked && numOfRoomsBooked <= 29)
        discount = TWENTY_TO_TWENTYNINE_ROOMS_DIS;
    else if (30 <= numOfRoomsBooked)
        discount = THIRTY_OR_MORE_ROOMS_DISC;

    if (numOfDaysRoomsBooked >= 3)
        discount = discount + THREE_DAYS_ROOM_DISC;

    totalRoomsCost = roomRent * (1 - discount)
                    * numOfRoomsBooked * numOfDaysRoomsBooked;

    billingAmount = totalRoomsCost * ( 1 +  salesTax / 100);

    cout << "Cost of renting one room: $" << roomRent << endl;
    cout << "Discount on each room rent: " << discount * 100 << "%" << endl;
    cout << "Number of rooms booked: " << numOfRoomsBooked << endl;
    cout << "The number of days the rooms are booked: "
         << numOfDaysRoomsBooked << endl;
    cout << "Total rooms cost: $ " << totalRoomsCost << endl;
    cout << "Sales Tax: $ " << totalRoomsCost * salesTax / 100 << endl;
    cout << "The billing amount is $" << billingAmount << endl;

	return 0;
}