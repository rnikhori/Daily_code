#include<iostream>
using namespace std;
void rotatecyclically(int arr[],int n)
{
    int i,temp;
    temp = arr[n-1];
    for(i=(n-1);i>0;i--)
        arr[i] = arr[i-1];
     arr[0]=temp;
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<",";
}
int main()
{
    int arr[] ={1,2,3,4,5};
    int n= 5;
        rotatecyclically(arr,n);
        printarray(arr,n);
        return 0;
}
