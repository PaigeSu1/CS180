/*
#include <iostream> 

using namespace std;

enum triangleType{scalene, isosceles, equilateral, noTriangle};

triangleType triangleShape(double side1, double side2, double side3);
void printShape(triangleType triangle);

int main()
{
    double lenSide1, lenSide2, lenSide3;

    cout << "Enter the lengths of the three sides of a triangle."
         << endl;
    cin >> lenSide1 >> lenSide2 >> lenSide3;
    cout << endl;

    cout << "The shape of the triangle is: ";
    printShape(triangleShape(lenSide1, lenSide2, lenSide3));
    cout << endl;

    return 0;
}

triangleType triangleShape(double side1, double side2, double side3)
{
    if (side1 == side2 && side2 == side3)
        return equilateral;
    else if ((side1 + side2 > side3) &&
             (side1 + side3 > side2) &&
             (side2 + side3 > side1))
        if (side1 == side2 || side2 == side3 || side1 == side3)
            return isosceles;
        else
            return scalene;
    else
        return noTriangle;
}


//This is used to print out the enum type indriectlly 
void printShape(triangleType triangle)
{
    switch (triangle)
    {
    case scalene: 
        cout << "scalene" << endl;
        break;
    case isosceles:
        cout << "isosceles" << endl;
        break;
    case equilateral:
        cout << "equilateral" << endl;
        break;
    case noTriangle:
        cout << "noTriangle" << endl;
	}
}
*/

//This is the write answer that is loacted above 

#include <iostream>
using namespace std;

//a)enum dec
enum triangleType{scalene,isosceles,equilateral,noTriangle};   

//b) return triangleType enum takes 3 sides
triangleType triangleShape(int x,int y,int z) 
{    
    triangleType triangle;

    if(x + y <= z || x + z <= y || y + z <= x){ 
    //if sum of two sides is less or equal to third side then it is not triangle
    triangle=noTriangle;
    }
    else if((x==y)&&(x==z)&&(y==z)){
        //all sides equal
        triangle=equilateral;
    }
    else if((x==y)||(x==z)||(y==z))
    {   
        // only ay two sides are equal
        triangle=isosceles;
    }
    else
    {   
        // triangle wid diffrent sides
        triangle=scalene;
    }
    return triangle; // return index of enum
}

void input()
{
    //c) input function
    int x,y,z;

    cout << "Enter side: ";
    cin >> x;
    cout << "Enter side: ";
    cin >> y;
    cout <<"Enter side: ";
    cin >> z;

    int ind= triangleShape(x,y,z);   // calling function

    if(ind==0){
        cout<<"\nscalene"<<endl;
    }
    else if(ind==1){
        cout<<"\nisosceles"<<endl;
    }
    else if(ind==2){
        cout<<"\nequilateral"<<endl;
    }
    else{
        cout<<"\nnoTriangle"<<endl;
    }
}
int main() 
{
input();
}
