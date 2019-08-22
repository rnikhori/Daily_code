#include<iostream>
using namespace std;
int binarysearch(int A[],int n,int x)
{
    int l=0,u=(n-1);
    while(l<=u)
    {
        int m =(l+u)/2;
        if(x==A[m])
          return m;
        else if(x>A[m])
            l= m+1;
        else
            u=m-1;
    }
    return -1;
}
int main()
{
    int L[]= {3,5,11,15,17,19,23};
    int s;
    cout<<"Enter a number ";
    cin>>s;
    int index = binarysearch(L,7,s);
    cout<<s<<" is at index "<<index;
    return 0;
}
