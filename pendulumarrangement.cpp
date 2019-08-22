// Created by Ritesh tourist nikhoriya
#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
   	/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/

    int t;
    cin>>t;
    while(t--){
    	  int n,D,sum =0;
    	cin>>n>>D;
    	 int C[n];
    	for (int i = 0; i < n; i++)
    	{
    		cin>>C[i];
    	}
    	 int P[n];
    	for (int i = 0; i < n; i++)
    	{
    		cin>>P[i];
    	}
    	if (D%2==0)
    	{
    		for (int i = 0; i < n; i++)
    		{
    			if (C[i]%2)
    			{
    			sum += P[i];
    			}

   			}
    	else
    	{
    		for (int i = 0; i < n; i++)
    		{
    			if (C[i]%2==0)
    			{
    			sum += P[i];
    			}
    		}
    	}

    	cout<<sum;

    	cout<<endl;

    }

    return 0;
}
