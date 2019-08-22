#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        long long N;
        cin>>N;
        int Arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>Arr[i];
        }
        for(int i=0;i<N;i++)
        {
            if(Arr[i]>Arr[i+1])
            cout<<Arr[i+1]<<" ";
            else
            cout<<-1<<" ";
        }
        cout<<endl;
    }

	return 0;
}
