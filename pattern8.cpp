#include<iostream>
using namespace std;
int main()
{
    int i,j,k;

    for (i=0;i<=4;i++)
    {
        k=1;
        for (j=0;j<=7;j++)
        {
            if(j>=(5-i) && j<=(3+i))
            {
                cout<<k;
                if(j<4)
               {
                  k++;
               }
               else
                k--;
            }
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
