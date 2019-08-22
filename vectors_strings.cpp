#include<iostream>
#include<vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    	cin>>n;
    	int a[n];
    	for (int i = 0; i < n; i++)
    	{
    		cin>>a[i];
    	}
    	int m;
    	cin>>m;
    	int b[m];
    	for (int i = 0; i < m; i++)
    	{
    		cin>>b[i];
    	}
    	for (int i = 0; i < n; i++)
    	{
    		for (int j = 0; j < m; j++)
    		{
    			if((a[i]+b[j]!=a[i]) && (a[i]+b[j]!=b[j]))
                {
                    cout<<a[i]<<endl<<b[j];
                    break;
                }



    		}
    	}
    return 0;

}
