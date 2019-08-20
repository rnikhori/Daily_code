// Created by Ritesh tourist nikhoriya
#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int l,int r,int x)
{
	if(l<=r)
	{
		int mid = l +(r-l)/2;
		if(arr[mid]==x)
			return mid;
		else if(arr[mid]>x)
			return binarysearch(arr,l,mid-1,x);
		
			return binarysearch(arr,mid +1,r,x);	
	}
	else 
	return -1;
}
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
    	int n;
    	cin>>n;
    	int arr[n];
    	for (int i = 0; i < n; i++)
    	{
    		cin>>arr[i];
    	}
    	int x;
    	cin>>x;
    	int mid =binarysearch(arr,0,n-1,x);
    	if(mid!=-1)
    	{
    	for (int i = mid+1; i < n; i++)
    	{
    		if(arr[i]!=x)
    			cout<<i<<" ";
    		    break;
                  
    	}
    	for (int j = mid; j >0; j--)
    	{
    		if(arr[j]!=x)
    			cout<<j<<" ";
    		    break;
    	}
        }

        cout<<endl;
        }
    return 0;
}