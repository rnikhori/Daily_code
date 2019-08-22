#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,sum=0;
    while(b<(4000000))
    {
    int c =a + b;
    a=b;
    b=c;
    if(b%2==0)
        sum = sum +b;
    }
    cout <<sum;
    return 0;

}
