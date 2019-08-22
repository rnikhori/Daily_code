#include<iostream>
using namespace std;
float Area(int);
int main()
{
    int r;
    cout<<"Radius of a circle:";
    cin>> r;
    float A;
    A = Area(r);
    cout<<A;
    return 0;

}
float Area(int r)
{
    float a ;
    a = 3.14*r*r ;
    return(a);
}
