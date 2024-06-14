
#include <iostream> 
#include <iomanip>
 
using namespace std;

const int SIZE = 6;

void getData(int distanceTime[], double distance[], int length);
void averageSpeedOverTimeInterval(int distanceTime[], double distance[],
                                  int length, double avgSpeed[]);
double maxAvgSpeed(double avgSpeed[], int length);
double minAvgSpeed(double avgSpeed[], int length);
void print(int distanceTime[], double distance[], int length, double avgSpeed[]);

int main ()
{
    int distanceTraveledAtTime[SIZE];
    double distanceTravelled[SIZE];
    double averageSpeed[SIZE];

    cout << fixed << showpoint << setprecision(2);

    getData(distanceTraveledAtTime, distanceTravelled, SIZE);

    for (int index = 0; index < SIZE; index++)
        cout << distanceTraveledAtTime[index] << "  " 
             << distanceTravelled[index] << endl;

    
    averageSpeedOverTimeInterval(distanceTraveledAtTime, distanceTravelled,
                                 SIZE, averageSpeed);
    print(distanceTraveledAtTime, distanceTravelled, SIZE, averageSpeed);
    
    return 0;
}

void getData(int distanceTime[], double distance[], int length)
{
    for (int index = 0; index < length; index++)
    {
        cout << "Enter time and the distance traveled at that time ";
        cin >> distanceTime[index] >> distance[index];
        cout << endl;
    }
}

void averageSpeedOverTimeInterval(int distanceTime[], double distance[],
                                  int length, double avgSpeed[])
{
    for (int index = 0; index < length - 1; index++)
        avgSpeed[index] = (distance[index + 1] - distance[index] ) / 
                           (distanceTime[index + 1] - distanceTime[index]);
}

double maxAvgSpeed(double avgSpeed[], int length)
{
    double max = avgSpeed[0];

    for (int index = 1; index < length - 1; index++)
        if (avgSpeed[index] > max)
            max = avgSpeed[index];

    return max;
}

double minAvgSpeed(double avgSpeed[], int length)
{
    double min = avgSpeed[0];

    for (int index = 1; index < length - 1; index++)
        if (avgSpeed[index] < min)
            min = avgSpeed[index];

    return min;
}

void print(int distanceTime[], double distance[], int length, double avgSpeed[])
{
    cout << setw(7) << "Time " << setw(20) << "Distance Traveled  " 
         << setw(10) << "Average Speed / Time Interval" << endl;

    cout << setw(5) << distanceTime[0]
             << setw(14) << distance[0] << setw(6) << " "
             << setw(10) << 0 << "  [0, 0] " << endl;

    for (int index = 1; index < length; index++)
        cout << setw(5) << distanceTime[index]
             << setw(14) << distance[index] << setw(6) << " "
             << setw(10) << avgSpeed[index - 1]
             << "  [" << distanceTime[index - 1] << ", "
             << distanceTime[index] << "]" << endl;
}