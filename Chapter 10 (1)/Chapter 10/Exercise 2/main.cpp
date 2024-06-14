//Main program
   
#include <iostream>
#include <string>
#include "productType.h"

using namespace std;

int main()
{
    productType product1;
    productType product2("Microwave", "M3562", "GeneralPool",
                         35, 175.00, 0.1);
    productType product3("D1290", 25, 375.00, 0.05);
    productType product4(10, 8.50, 0.2);

    product1.print();
    cout << "***************" << endl << endl;

    product2.print();
    cout << "***************" << endl << endl;



    return 0;
}