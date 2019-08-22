#include<iostream>
 using namespace std;
 long fact(int n)
 {
     if(n>0)
        return(n*fact(n-1));
     else
        return 1;
 }
 int main()
 {
     int n;
     cout<<"Enter a number";
     cin>>n;
     cout<<"factorial of number "<<n<<" is "<<fact(n);
     return 0;
 }
