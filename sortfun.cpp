#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    	cin>>n;
    	int A[n];
    	int even[n]={0};
    	int odd[n]={0};
    	int p=0,q=0;
    	for (int i = 0; i < n; i++)
    	{
    		cin>>A[i];
    	}
    	for (int i = 0; i < n; i++)
    	{
    		if(A[i]%2==0)
    			even[p++]=A[i];
    		else
    			odd[q++]=A[i];
    	}
    	sort(odd,odd+n,greater<int>());

    	sort(even,even+n);
    	for(int i=0;i<n;i++)
        {
            A[i]=odd[i]+even[i];
            cout<<A[i]<<" ";
        }
        cout<<endl;
return 0;
}
