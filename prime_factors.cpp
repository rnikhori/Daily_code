#include<iostream>
using namespace std;
int main()
{
    long long int N,i,maxi=0;
    cout<<"Enter a number";
    cin>>N;
    for(i=2;N>1;i++)
    {
        while(N%i==0)
        {
            cout<<i<<"\n";
            N=N/i;
        }
        maxi = i;

    }
    cout<<"largest prime factor"<<maxi;

    return 0;
}
