//Header files  
#include <iostream>
#include <iomanip>
using namespace std;

//Two prime numbers are called twin primes 

//Prototype Function "Debug list"
void funcEx23(int num);
void sumAvgResult(int n, int m, int& sum, double& avg);

int main()
{
    int num;
    int n, m;
    int sumNM;
    double avgNM;

    cout << fixed << showpoint << setprecision(2);
    //Pretty Deimcal points 

    cout << "Enter an integer: ";
    cin >> num;
    cout << endl;

    funcEx23(num); //Function call 

    cout << "Enter two integers: ";
    cin >> n >> m;
    cout << endl;

    sumAvgResult(n, m, sumNM, avgNM); //function call 

    cout << "The sum of the numbers between " << n << " and " << m
         << " (inclusive):  " << sumNM << endl;
    cout << "The average of the numbers between " << n << " and " << m
         << " (inclusive):  " << avgNM << endl;

    return 0;
 }

void funcEx23(int num)
{
    if (num % 2 == 0)
        cout << 2 * num << endl;
    else
        cout << 5 * num << endl;
}


void sumAvgResult(int n, int m, int& sum, double& avg)
{
    int count = 0;
    sum = 0;

    if (n >= m)
    {
        count = n - m + 1;

        for (int i = m; i <= n; i++)
            sum = sum + i;
    }
    else
    {
        count = m - n + 1;

        for (int i = n; i <= m; i++)
            sum = sum + i;
    }

    avg = static_cast<double>(sum) / count;  //count != 0
}
