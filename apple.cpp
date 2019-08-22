#include<iostream>
using namespace std;
int main()
{
    int apple,box,j=0;
    cin>>apple;
    cin>>box;
    int c1[box]={0},c2[box]={0};
     int apple2 = apple;
     /*while(apple!=0)
     {

            c2[j]+=box;
            j++;
            apple = apple - box;

     }*/
     while(apple2!=0)
     {
         for(int i=0 ;i<box;i++)
            c1[i]+=1;
            c2[j++] += box;
         apple2 = apple2 - box;
     }

     int flag =1;
     for(int i=0;i<box;i++)
     {
     if(c1[i]!=c2[i])
     {
        flag = 0;
        break;

     }
     }
     if (box == 1)
        flag = 1;
     if(flag ==0)
        cout<<"yes";
        else
        cout<<"no";
     return 0;




}
