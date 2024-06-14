//Program: Second degree polynomial factorization 
 
#include <iostream>
#include <cmath>

using namespace std;

void factorization(int a, int b, int c, int& numU1, int& denU1, 
                   int& numV1, int& denV1, bool& isFactorable);
int gcd(int a, int b);
 
int main()
{
    int coeffOfXSquare;
    int coeffOfX;
    int constantTerm;
    int numU; 
    int denU; 
    int numV; 
    int denV;
    bool isPolynomialFactorable;

    cout << "Enter the coefficient of x^2: ";
    cin >> coeffOfXSquare;
    cout << endl;

    cout << "Enter the coefficient of x: ";
    cin >> coeffOfX;
    cout << endl;

    cout << "Enter the constant term: ";
    cin >> constantTerm;
    cout << endl;

    factorization(coeffOfXSquare, coeffOfX, constantTerm, numU, denU, 
                  numV, denV, isPolynomialFactorable);

    if (isPolynomialFactorable)
    {
        cout << coeffOfXSquare << "x^2";

        if (coeffOfX > 0)
            cout << " + " << coeffOfX << "x";
        else if (coeffOfX < 0)
            cout << " - " << abs(coeffOfX) << "x";

        if (constantTerm > 0)
            cout << " + " << constantTerm << " = ";
        else if (constantTerm < 0)
            cout << " - " << abs(constantTerm) << " = ";

        if (coeffOfXSquare < 0)
            cout << "-";

        cout << "(";

        if (denU != 1)
            cout << denU << "x";
        else
            cout << "x";

        if (numU > 0)
            cout << " - " << numU << ")(";
        else if (numU < 0)
            cout << " + " << abs(numU) << ")(";

        if (denV != 1)
            cout << denV << "x";
        else
            cout << "x";

        if (numV > 0)
            cout << " - " << numV << ")" << endl;
        else if (numV < 0)
            cout << " + " << abs(numV) << ")" << endl;
    }
    else
        cout << "The polynomial is not factorable." << endl;

    return 0;
}

void factorization(int a, int b, int c, int& numU1, int& denU1, 
                   int& numV1, int& denV1, bool& isFactorable)
{
    double discriminant;
    int temp;
    int temp1;

    if (a < 0)
    {
        a = -a;
        b = -b;
        c = -c;
    }
 
    isFactorable = true;

    discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
        isFactorable = false;
    else
    {
        temp = static_cast<int>(sqrt(discriminant));

        if (temp * temp != discriminant)
            isFactorable = false;
        else
        {
            numU1 = -b + temp;
            denU1 = 2 * a;

            temp1 = gcd(numU1, denU1);

            numU1 = numU1 / temp1;
            denU1 = denU1 / temp1;         

            numV1 = -b - temp;
            denV1 = 2 * a;
           
            temp1 = gcd(numV1, denV1);

            numV1 = numV1 / temp1;
            denV1 = denV1 / temp1;
        }
    }
}

int gcd(int a, int b)
{
    int temp;
    
    a = abs(a);
    b = abs(b);

    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    while (a % b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }

    return b;
}
