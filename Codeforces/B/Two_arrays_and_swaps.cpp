#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n],b[n];
	    for(int i=0 ; i<n ; i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0 ; i<n ; i++)
	    {
	        cin>>b[i];
	    }
	    sort(a,a+n);
	    sort(b,b+n);
	    int curr=0;
	    for(int i=1 ; i<=k ; i++)
	    {
	        if(a[curr]<b[n-curr-1]){
	        swap(a[curr],b[n-curr-1]);
	        }
	        curr++;
	    }
	    int res=0;
	    for(int i=0 ; i<n ; i++)
	    {
	        res=res+a[i];
	    }
	    cout << res << endl;
	}
	return 0;
}