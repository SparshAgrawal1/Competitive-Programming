#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() {
	ll n,m;
	cin>>n>>m;
	ll a[m];
	for(ll i=0 ; i<m ; i++)
	{
	    cin>>a[i];
	}
	ll count=0;
	ll h=1;
	for(ll i=0 ; i<m ; i++)
	{
	    if(a[i]>=h)
	    {
	        count=count+(a[i]-h);
	       // cout << a[i]-h << "w" << endl;
	        h=a[i];
	    }
	    else
	    {
	        count=count+(n-h);
	       // cout << n-a[i] << "r" << endl;
	        count++;
	        h=1;
	        count=count+(a[i]-h);
	       // cout << a[i]-h << "b" << endl;
	        h=a[i];
	    }
	}
	cout << count << endl;
	return 0;
}