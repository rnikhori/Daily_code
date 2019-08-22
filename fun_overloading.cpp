#include<iostream>
using namespace std;
float area(int R)
{
    return(3.14*R*R);
}
int area(int l,int b)
{
    return(l*b);
}
int main()
{
    int r;
    cout<<"enter radius of a circle";
    cin>>r;
    cout<<"area of a circle is"<<area(6);
    int l,b;
    cout<<"enter length and breadth of rectangle";
    cin>>l>>b;
    cout<<"area of a rectangle is"<<area

}
