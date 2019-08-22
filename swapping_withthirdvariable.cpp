#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\n Enter two numbers \n";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\n The values after swapping \n"<<a<<"\n"<<b;
    return 0;
}
