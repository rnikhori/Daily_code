#include<iostream>
using namespace std;
int main()
{
    int A[10], i, index,temp ;
    cout<<"Enter an array elements";
    for(i=0;i<=9;i++)
    cin>>A[i];


    for(i=0;i<=9;i++)
    { index =i ;
        for(int j=i;j<=9;j++)
      {
        if(A[index] >  A[j])

           index=j;
      }
            temp = A[i];
            A[i] = A[index];
            A[index] = temp;

    }

    for(i=0;i<=9;i++)
    cout<<A[i]<<"\n";

    return 0;
}
