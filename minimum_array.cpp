#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    	cin>>n;
    	int A[n];
    	for (int i = 0; i < n; i++)
    	{
    		cin>>A[i];
    	}
    	int k =min(A[n]);
    	cout<<k;
    	return 0;
}
