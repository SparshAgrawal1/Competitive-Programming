#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	ll t;cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	   // ll a[n];
	    string s="";
	    for(ll i=0 ; i<n ; i++)
	    {
	        ll a;
	        cin>>a;
	        if(a%k==0)
	        {
	            s=s+'1';
	        }
	        else
	        {
	            s=s+'0';
	        }
	    }
	    cout << s << endl;
	}
	return 0;
}
