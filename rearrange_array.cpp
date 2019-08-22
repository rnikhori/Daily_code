#include<iostream>
using namespace std;
int rearrange(int A[],int n)
{
    int i,j;
    for(i=0;i<=n-1;i++)
    {
        for(j=i;j<=n-1;j++)
            if(A[j]=i)
             return A[j];
            else
             return -1;
    }
}
int main()
{
    int arr[]={-1,-1,6,19,3,2,-1,4,-1};
    int n;
    rearrange(arr,9);
    for (int i=0;i<9;i++)
        cout<<arr[i]<<" ";
    return 0;



}
