#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() 
{
	ll n;
	cin>>n;
	vector<ll> v;
	vector<ll> q;
	ll x1=0;
	ll y1=0;
	for(ll i=0 ; i<n ; i++)
	{
	    ll a;
	    cin>>a;
	    v.push_back(a);
	}
	for(ll i=0 ; i<n ; i++)
	{
	    if(v[i]==2)
	    {
	        q.push_back(v[i]);
	        v[i]=-1;
	        break;
	    }
	}
	for(ll i=0 ; i<n ; i++)
	{
	    if(v[i]==1)
	    {
	        q.push_back(v[i]);
	        v[i]=-1;
	        break;
	    }
	}
	for(ll i=0 ; i<n ; i++)
	{
	    if(v[i]==2)
	    {
	        q.push_back(v[i]);
	        v[i]=-1;
	       // break;
	    }
	}
	for(ll i=0 ; i<n ; i++)
	{
	    if(v[i]==1)
	    {
	        q.push_back(v[i]);
	        v[i]=-1;
	       // break;
	    }
	}
	for(auto x:q)
	{
	    cout << x << " ";
	}
	cout << endl;
	return 0;
}