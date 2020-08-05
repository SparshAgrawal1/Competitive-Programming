#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    ll x = k/(n-1);
	    ll y = k%(n-1);
	    ll z = n*x;
	    if(y!=0)
	    cout  << z+y << endl;
	    else
	    {
	        cout << z-1 << endl;
	    }
	}
	return 0;
}