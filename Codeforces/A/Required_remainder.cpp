#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() {
	ll t;cin>>t;
	while(t--)
	{
	    ll x,y,n;
	    cin>>x>>y>>n;
	    ll a = n%x;
	    if(a >= y)
	    {
		    cout << x*(n/x)+y << endl;
    	}
    	else
    	{
    		cout << x*(n/x-1)+y << endl;
    	}
	}
	return 0;
}
