#include<iostream>
 using namespace std;
 int GCD(int a,int b)
 {
     if(a==0)
     return(b);
     else if(b==0)
        return (a);
    else
        return(GCD(a%b,b));


 }
 int main()
 {
     cout<<"GCD of given numbers are"<<GCD(92,7);
     return 0;
 }
