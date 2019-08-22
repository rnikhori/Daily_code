#include<iostream>
using namespace std;
int main()
{
    int N,i;
    for(N=1;N<=100;N++)
    {
        for(i=2;i<=N;i++)
            if(N%i==0)
            break;
        if(N==i)
          cout<<N<<endl;
    }
    return 0;
}
