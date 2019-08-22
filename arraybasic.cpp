#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    int N,maxo=0;
    cin>>N;
    int A[N],B[N];
    for(int i=0;i<N;i++)
    {

        cin>>A[i];
    }
     for(int i=0;i<N;i++)
     {
        cin>>B[i];
     }
     maxo = (A[0]*20)-(B[0]*10);

      for(int i=0;i<N;i++)
      {

        if((20*A[i])-(B[i]*10)>maxo)
           maxo = (20*A[i])-(B[i]*10);

    }
    if(maxo<0)
        maxo = 0;

    cout<<maxo<<endl;
    }
    return 0;
}
