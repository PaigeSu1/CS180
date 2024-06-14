//Header files  
#include <iostream>
#include <iomanip>
using namespace std;

//Prototype function of VOID TYPE "Debug list"
void funcEx23(int num);
void sumAvgResult(int n, int m, int& sum, double& avg);

int main()
{
    int num;
    int n, m;
    int sumNM;
    double avgNM;

    cout << fixed << showpoint << setprecision(2);
    //pretty decimal format 

    cout << "Enter an integer: "; //ex 18 
    cin >> num;
    cout << endl;

    funcEx23(num);

    cout << "Enter two integers: "; // 2 and 4 
    cin >> n >> m;
    cout << endl;

    sumAvgResult(n, m, sumNM, avgNM);

    cout << "The sum of the numbers between " << n << " and " << m
         << " (inclusive):  " << sumNM << endl;
    cout << "The average of the numbers between " << n << " and " << m
         << " (inclusive):  " << avgNM << endl;

    return 0;
 }

void funcEx23(int num)
{
    if (num % 2 == 0)    //if (18 % 2 == 0)
        cout << 2 * num << endl; //Then 2 * 18 = 36
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
            sum = sum + i; //coutner 
    }
    else
    {
        count = m - n + 1;

        for (int i = n; i <= m; i++)
            sum = sum + i; //counter
    }

    avg = static_cast<double>(sum) / count;  //count != 0
}
