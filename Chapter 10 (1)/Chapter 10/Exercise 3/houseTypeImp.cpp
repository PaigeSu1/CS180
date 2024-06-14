#include <iostream>
#include <string>

#include "houseType.h"

using namespace std;

void houseType::set(string s, int bed, int bath, int cg, 
                    int yb, int fs, double pr, double tx)
{
    style = s;
    numOfBedrooms = bed;
    numOfBathrooms = bath;
    numOfCarsGarage = cg;
    yearBuilt = yb;
    finishedSquareFootage = fs;
    price = pr;
    tax = tx;
}

void houseType::print() const
{
    cout << "Style: " << style << endl;
    cout << "Number of Bedrooms: " << numOfBedrooms << endl;
    cout << "Number of Bathrooms: " << numOfBathrooms << endl;
    cout << "Number of cars garage: " << numOfCarsGarage << endl;
    cout << "Year built: " << yearBuilt << endl;
    cout << "Finished square footage: " << finishedSquareFootage << endl;
    cout << "Price: " << price << endl;
    cout << "Tax: " << tax << endl;
}

void houseType::setStyle(string s)
{
    style = s;
}

string houseType::getStyle() const
{
    return style;
}

void houseType::setNumOfBedrooms(int bed)
{
    numOfBedrooms = bed;
}

int houseType::getNumOfBedrooms() const
{
    return numOfBedrooms;
}
 
void houseType::setNumOfBathrooms(int bath)
{
    numOfBathrooms = bath;
}

int houseType::getNumOfBathrooms() const
{
    return numOfBathrooms;
}

void houseType::setNumOfCarsGarage(int cg)
{
    numOfCarsGarage = cg;
}

int houseType::getNumOfCarsGarage() const
{ 
    return numOfCarsGarage;
}
 
void houseType::setYearBuilt(int yb)
{
    yearBuilt = yb;
}

int houseType::getYearBuilt() const
{
    return yearBuilt;
}
  
void houseType::setFinishedSquareFootage(int fs)
{
    finishedSquareFootage = fs;
}

int houseType::getFinishedSquareFootage() const
{
    return finishedSquareFootage;
}
 
void houseType::setPrice(double pr)
{
    price = pr;
}

double houseType::getPrice() const
{
    return price;
}
 
void houseType::setTax(double tx)
{
    tax = tx;
}

double houseType::getTax() const
{
    return tax;
}
 

houseType::houseType(string s, int bed, int bath, int cg, 
                     int yb, int fs, double pr, double tx)
{
    style = s;
    numOfBedrooms = bed;
    numOfBathrooms = bath;
    numOfCarsGarage = cg;
    yearBuilt = yb;
    finishedSquareFootage = fs;
    price = pr;
    tax = tx;
}