#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
        cin>>A[i];
    for(int i=0;i<N-1;i++)
       {
        int flag = 0;
        for(int j=i+1;j<N;j++)
        {
        if(A[i]<A[j])
        {
            flag =0;
            break;
        }
        else
        {
            flag = 1;
            int temp = A[i];
        }
              if(flag)
                cout<<A[i]<<" ";
        }
       }
     cout<<A[N-1];
     cout<<endl;
     return 0;
}
