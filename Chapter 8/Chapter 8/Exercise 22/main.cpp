// 937
// 63521
// 824560

#include <iostream>
#include <cmath> 
 
using namespace std;

const int SIZE = 1230;

bool isPrime(int number);
void first1230PrimeNum(int list[], int length);
void primeTest(int num, int list[], int length, 
               bool& primeNum, int& firstPrimeFactIndex);
void primeFactorization(int num, int list[], int length, 
                        int firstPrimeFactIndex);
 
int main ()
{	
	int primeList[SIZE];
    int number;
    int primeFactIndex;
    bool isNumPrime;

    first1230PrimeNum(primeList, SIZE);

    cout << "Enter an integer between 2 and 100,000,000: " ;
    cin >> number;
    cout << endl;

    while (number < 2 || number > 100000000)
    {
        cout << "Enter an integer between 2 and 100,000,000: " ;
        cin >> number;
        cout << endl;
    }

    primeTest(number, primeList, SIZE, isNumPrime, primeFactIndex);

    if (isNumPrime == false)
        primeFactorization(number, primeList, SIZE, primeFactIndex);
    else
        cout << number << " is a prime number." << endl;


	return 0;
}

void primeFactorization(int num, int list[], int length, 
                        int firstPrimeFactIndex)
{
    bool done = false;

    int index = firstPrimeFactIndex;

    cout << num << " is not a prime number." << endl;

    cout << num << " = ";

    cout << list[index];
    num = num / list[index];

    while (!done && index < length)
    {
        while (num % list[index] == 0 && num > 0)
        {
            cout << " * " << list[index];
            num = num / list[index];
        }

        if (num == 0 || num == 1)
            done = true;

         index++;
    }

    if (num > 1)   //num is now a prime number
        cout << " * " << num;

    cout << endl;
}

void primeTest(int num, int list[], int length, 
               bool& primeNum, int& firstPrimeFactIndex)
{
    int limit = static_cast<int>(sqrt(num * 1.0));

    for (int i = 0; i < length; i++)
    {
        if (num == list[i])
        {
            primeNum = true;
            break;
        }
        else if (list[i] <= limit && num % list[i] == 0)
        {
            primeNum = false;
            firstPrimeFactIndex = i;
            break;
        }
        else if (list[i] > limit)
        {
            primeNum = true;
            break;
        }
    }
}

void first1230PrimeNum(int list[], int length)
{
    list[0] = 2;
    int count = 1;
    int num = 3;

    while (count < SIZE)
    {
        if (isPrime(num))
            list[count++] = num;
        num = num + 2;
    }
}

bool isPrime(int number)
{
	bool isPrimeNum = true;
	int sqrtNum;
	int divisor = 3;

    if (number == 2)
        isPrimeNum = true;
    else if (number % 2 == 0)
        isPrimeNum = false;
    else
    {
        sqrtNum = static_cast<int> (sqrt(static_cast<double>(number)));

        while (divisor <= sqrtNum)
        {
            if (number % divisor == 0)
            {
                isPrimeNum = false;
                break;
            }
            else
                divisor = divisor + 2;
        }
    }

    return isPrimeNum;
}
