#include<iostream>
using namespace std;
int main()
{
 int x,i;
 cout<<" \n Enter a number : \n";
 cin>>x;
 for(i=2;i<=x-1;i++)
 {
     if(x%i==0)
     break;

 }
 if(i==x)
    cout<<"\n Number is prime";
 else
    cout<<"\n Number is not prime";
 return 0;
}
