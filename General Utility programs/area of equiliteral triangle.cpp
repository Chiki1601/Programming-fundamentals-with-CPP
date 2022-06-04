//area of equiliteral triangle
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int side;
    float area;
    cout<<"Enter the values of side:";
    cin>>side;
    area =(float)(sqrt(3)*(side*side))/4;
    cout<<"Area of equiliteral trianglee:"<<area;

    return 0;
}