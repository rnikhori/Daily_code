// Created by Ritesh tourist nikhoriya
#include <iostream>
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
    	int n;
    	cin>>n;
    	int arr[n],refr[n];
    	for (int i = 0; i < n; i++)
    	{
    		cin>>arr[i];
    	}
    	int k =(n-1)/2;
    	for (int i = 0; i < n/2; i++)
    	{
    		while(k--)
    		{
    		refr[k]=arr[2*i];
    		}
    	}
    		for (int i = 0; i < (n-1)/2; i++)
    		{
    			while(++k<n)
    			{
    				refr[k]=arr[(2*i)+1];
    			}
    		}

    		for (int i = 0; i < n; i++)
    		{
    			cout<<refr[i];
    		}
    		cout<<endl;
    	}


    return 0;
}
