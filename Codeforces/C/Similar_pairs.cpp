#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int e=0;int o=0;int a[n];
	    for(int i=0 ; i<n ; i++)
	    {
	        cin>>a[i];
	        if(a[i]%2==0)
	        {
	            e++;
	        }
	        else
	        {
	            o++;
	        }
	    }
	    sort(a,a+n);
	    int count=0;
	    for(int i=0 ; i<n-1 ; i++)
	    {
	        if(a[i+1]-a[i]==1)
	        {
	            count++;
	        }
	    }
	    if((o%2==0 && e%2==0)||(o%2!=0 && e%2!=0 && count>=1))
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}