// Created by Ritesh tourist nikhoriya
#include <bits/stdc++.h>
using namespace std;
int main()
{
//   	#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	#endif

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    	int N,M,L,K,R;
    	cin>>N>>M>>L>>K>>R;
    	int C[N],P[N];
    	for (int i = 0; i < N; i++)
    	{
    		cin>>C[i]>>P[i];
    	}
    	for (int i = 0; i < N; i++)
    	{
    		if (C[i]>K+1)
    		{
    			int t;
    			t=(M*(C[i]-1));
    			if (t>=L && t<=R)
    			{
    				cout<<P[i];
    			}

    		}


    		 else if (C[i]<K-1)
    		{
    			int t;
    			t=(M*(C[i]+1));
    			if (t>=L && t<=R)
    			{
    				cout<<P[i];
    			}

    		}




    		else if(K-1<=C[i]<=K+1)
    		{
    			int t;
    			t=(M*K);
    			if (t>=L && t<=R)
    			{
    				 cout<<P[i];
    			}

    		}

    		else
                cout<<"-1";

    	}
        cout<<endl;
        }
    return 0;
}

