//area of pentagone
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int side;
    float area;
    cout<<"Enter the values of side:";
   
    cin>>side;
    area =(sqrt(5*(5+2*sqrt(5)))*side*side)/4;
    cout<<"Area of  pentagone:"<<area;

    return 0;
}
