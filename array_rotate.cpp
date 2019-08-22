#include<iostream>
using namespace std;
void leftrotate_one(int arr[],int N)
{
    int temp=0;
    temp =arr[0];
    for(int i=0;i<N;i++)
        arr[i]=arr[i+1];
        arr[N-1]=temp;
}
int main()
{
int T;
cin>>T;
while(T--)
{
    int N,d;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
        cin>>A[i];
    cin>>d;
    while(d--)
        leftrotate_one(A,N);
    for(int i=0;i<N;i++)
        cout<<A[i]<<" ";
        cout<<endl;
}
    return 0;


}

