//area of trapezoid
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int b1,b2,h;
    float area;
    cout<<"Enter the values of bases:";
    cin>>b1>>b2;
    cout<<"Enter the value of height:";
    cin>>h;
    area =(float)((b1+b2)*h)/2;
    cout<<"Area of  trapezoid:"<<area;

    return 0;
}