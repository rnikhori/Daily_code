#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number:";
    cin>>x;
    if (x>0)
    {
        cout<<" \n Number is positive \n";
    }
    else if(x<0)
    {
        cout<<"\n Number is negative \n";
    }
    else
    {
        cout<<"\n ZERO \n";
    }
    return 0;
}
