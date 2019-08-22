#include<iostream>
using namespace std;
void reverseanarray(int arr[],int start,int endd)
{
    while(start<endd)
    {
        int temp = arr[start];
        arr[start]=arr[endd];
        arr[endd]=temp;
       return  reverseanarray(arr,start+1,endd-1);
    }
}
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
      int N;
      cin>>N;
      int A[N];
      for(int i=0;i<N;i++)
        cin>>A[i];
      reverseanarray(A,0,N-1);
      for(int i=0;i<N;i++)
     cout<<A[i]<<" ";
  }
  return 0;
}

