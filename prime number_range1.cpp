#include<iostream>
using namespace std;
int main()
{
    int x,i,l,u;
    cout<<"\n Enter two numbers :";
    cin>>l>>u;
    for(x=l+1;x<u-1;x++)
    {
       for(i=2;i<=x-1;i++)
       {
        if(x%i==0)
            break;
            }
        if(x==i)
            cout<<x<<'\n';
    }

    return 0;

}
