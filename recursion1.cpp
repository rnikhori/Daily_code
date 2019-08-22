#include<iostream>
 using namespace std;
 void TOH(int n,char l,char m,char r)
      {
          if(n>=1)
          {
            TOH(n-1,l,r,m);
             cout<<"move from rod "<< l <<"   to   "<< r <<endl;
             TOH(n-1,m,l,r);
          }
      }
 int main()
 {
     int n=10;
     TOH(n,'l','m','r');
     return 0;
 }
