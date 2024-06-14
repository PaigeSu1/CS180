//header files 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//how to make a struct data type
struct computerType
{
    string manufacturer;
    string modelType;
    string processorType;
    int ram;
    int hardDriveSize;
    int yearBuilt;
    double price;
}; //sad face

//main function 
int main()
{
    //how to use the struct witin the whole program
    computerType computer;

    //make the output look pretty 
    cout << fixed << showpoint << setprecision(2);

    //ask for user inputs of data type string
    cout << "Enter the name of the manufacturer: ";
    getline(cin, computer.manufacturer);
    cout << endl;

    cout << "Enter the model of the computer: ";
    getline(cin, computer.modelType);
    cout << endl;

    cout << "Enter processor type: ";
    getline(cin, computer.processorType);
    cout << endl;

    //this is a part that changes because ints are being entered in 
    //Ask user input for entering int of type sturct
    cout << "Enter the size of RAM (in GB): ";
    cin >> computer.ram;
    cout << endl;

    cout << "Enter the size of hard drive (in GB): ";
    cin >> computer.hardDriveSize;
    cout << endl;

    cout << "Enter the year the computer was built: ";
    cin >> computer.yearBuilt;
    cout << endl;

    //ask user to enter a double of data type struct 
    cout << "Enter the price: ";
    cin >> computer.price;
    cout << endl;

    //How to print the result out and must be done one by one 
    cout << "Manufacturer: " << computer.manufacturer << endl;
    cout << "Model: " << computer.modelType << endl;
    cout << "Processor: " << computer.processorType << endl;
    cout << "Ram: " << computer.ram << endl;
    cout << "Hard Drive Size: " << computer.hardDriveSize << endl;
    cout << "Year Built: " << computer.yearBuilt << endl;
    cout << "Price: $" << computer.price << endl;

    return 0;
}
