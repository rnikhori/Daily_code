#include<iostream>
using namespace std;
int main()
{
    int x,y=0,r;
    cout<<"\n Enter a two digit number: \n";
    cin>>x;
    while(x!=0)
    {
        r=x%10;
        y=y*10 +r;
        x=x/10;
    }
    cout<<"\n Reverse number is : \n"<<y;
    return 0;

}
