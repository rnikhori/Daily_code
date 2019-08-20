// Created by Ritesh tourist nikhoriya
#include <bits/stdc++.h>
using namespace std;
int main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    	int n,x,count=0;
    	cin>>n>>x;
    	int arr[n];
    	for (int i = 0; i < n; i++)
    	{
    		cin>>arr[i];
    	}
    	for (int i = 0; i < n; i++)
    	{
    		if (arr[i]==x)
    		{
    			count++;
    		}
    	}
    	if (count==0)
    		cout<<-1;
    	else
    		cout<<count;
    
        

        cout<<endl;
        }
    return 0;
}