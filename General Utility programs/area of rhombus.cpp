//area of rhombus
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int d1,d2;
    float area;
    cout<<"Enter the values of diagonals (D1 and D2):";
   
    cin>>d1>>d2;
    area =(d1*d2)/2;
    cout<<"Area of  rhombus:"<<area;

    return 0;
}
