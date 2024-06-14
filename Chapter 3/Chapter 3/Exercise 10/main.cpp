
#include <iostream> 
#include <iomanip>

using namespace std;

const double PI = 3.14159;

int main()
{
	double yardLength;
    double treeRadius;
    double distanceBetweenTrees;

    int numberOfTrees;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the length of the yard: ";
    cin >> yardLength;
    cout << endl;
 
    
    cout << "Enter the radius of the fully grown tree: ";
    cin >> treeRadius;
    cout << endl;
    
    cout << "Enter the distance between fully grown trees: ";
    cin >> distanceBetweenTrees;
    cout << endl;  

    numberOfTrees =  static_cast<int> (yardLength / (2 * treeRadius + distanceBetweenTrees));

	cout << "The number of trees that can be planted: " << numberOfTrees << endl;
    
    cout << "Total area occupied by the trees: "
        << PI * treeRadius * treeRadius * numberOfTrees << endl;

    return 0;
}