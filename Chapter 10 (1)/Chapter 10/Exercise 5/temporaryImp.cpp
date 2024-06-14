 
#include <iostream>
#include "temporary.h"

using namespace std; 

void temporary::set(string d, double f, double s)
{
    description = d;

    if (f >= 0)
        first = f;
    else
        first = 0;

    if (s >= 0)
        second = s;
    else
        second = 0;
}

void temporary::print()
{
    cout << description;

    if (description == "rectangle")
        cout << ": length = " << first << ", width = " << second
             << ", area = " << manipulate() << endl;
    else if (description == "circle")
        cout << ": radius = " << first 
             << ", area = " << manipulate() << endl;
    else if (description == "sphere")
        cout << ": radius = " << first 
             << ", volume = " << manipulate() << endl;
    else if (description == "cylinder")
        cout << ": radius = " << first << ", height = " << second
             << ", volume = " << manipulate() << endl;
    else
        cout << " -- invalid shape." << endl;
}

double temporary::manipulate()
{
    if (description == "rectangle")
        return first * second;
    else if (description == "circle")
        return 3.1416 * first * first; 
    else if (description == "sphere")
        return (4.0 / 3.0) * 3.1416 * first * first * first;
    else if (description == "cylinder")
        return 3.1416 * first * second;
    else
        return -1;
}


void temporary::get(string& d, double& f, double& s)
{
    d = description;
    f = first;
    s = second;
}


void temporary::setDescription(string d)
{
    description = d;
}


void temporary::setFirst(double f)
{
    
    if (f >= 0)
        first = f;
    else
        first = 0;
}


void temporary::setSecond(double s)
{  
    if (s >= 0)
        second = s;
    else
        second = 0;
}

 
string temporary::getDescription() const
{
    return description;
}


double temporary::getFirst() const
{
    return first;
}


double temporary::getSecond() const
{
    return second;
}


temporary::temporary(string d, double f, double s)
{
    set(d, f, s);
}