//area of hexaagone
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int side;
    float area;
    cout<<"Enter the value of side:";
   
    cin>>side;
    area =(3*sqrt(3)*side*side)/2;
    cout<<"Area of  hexaagone:"<<area;

    return 0;
}
