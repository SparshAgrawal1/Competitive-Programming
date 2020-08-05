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
	    ll n;
	    cin>>n;
	    set<ll> s;
	    vector<ll> v;
	    for(ll i=0 ; i<2*n ; i++)
	    {
	        ll a;
	        cin>>a;
	        if(s.find(a)==s.end())
	        {
	            s.insert(a);
	            v.push_back(a);
	        }
	    }
	    for(auto x:v)
	    {
	        cout << x << " ";
	    }
	    cout <<  endl;
	
	}
	return 0;
}