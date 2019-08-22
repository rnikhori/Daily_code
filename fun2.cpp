#include<iostream>
using namespace std;
void sum1(void);
void sum2(int);
int sum3(void);
int sum4(int);
int main()
{
    int k;
    k= sum4(5);
    cout<<k;

}

//TNRN
void sum1()
{
    int i,N,s=0;
    cout<<"Enter a number :";
    cin>>N;
    for(i=0;i<=N;i++)
    {
       s=s+(i*i);
    }
    cout<<s;
}
//TSRN
void sum2(int N)
{
    int i ,s=0;
    for(i=0;i<=N;i++)
    {
        s=s+(i*i);
    }
    cout<<s;
}
//TNRS
int sum3()
{
    int i,N,s=0;
    cout<<"Enter a number :";
    cin>>N;
    for(i=0;i<=N;i++)
    {
       s=s+(i*i);
    }
    return(s);

}
//TSRS
int sum4(int N)
{
    int i,s=0;
    for(i=0;i<=N;i++)
    {
       s=s+(i*i);
    }
    return(s);

}
