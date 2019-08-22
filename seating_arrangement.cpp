#include<iostream>
using namespace std;
int main()
{
    int T,N,rem,i;
    cin>>T>>N;
    for (i=1;i<=N;i++)
    {
        rem = i%12;
        if( rem == 1)
            cout<<N+11<<" WS";
        else if( rem == 2)
            cout<<N+9<<" MS";
        else if( rem == 3)
            cout<<N+7<<" AS";
        else if( rem == 4)
            cout<<N+5<<" AS";
        else if( rem == 5)
            cout<<N+3<<" MS";
        else if( rem == 6)
            cout<<N+1<<" WS";
        else if( rem == 7)
            cout<<N-1<<" WS";
         else if( rem == 8)
            cout<<N-3<<" MS";
        else if( rem == 9)
            cout<<N-5<<" AS";
        else if( rem == 10)
            cout<<N<<" AS";
        else if( rem == 11)
            cout<<N-7<<" MS";
        else if( rem == 0)
            cout<<N<<" WS";


    }
    return 0;
}
