#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() 
{
	ll n;
	cin>>n;
	vector<ll> v;
	for(ll i=0 ; i<n ; i++)
	{
	    ll a;cin>>a;
	    v.push_back(a);
	}
// 	ll x=v[n-1];
// 	bool flag=false;
// 	for(ll i=0 ; i<n-1 ; i++)
// 	{
// 	    if(v[i]>x)
// 	    {
// 	        flag=true;
// 	        break;
// 	    }
	    
// 	}
// 	if(flag==false)
// 	{
// 	    cout << x << endl;
// 	}
// 	else
// 	{
// 	    ll l=0;
// 	    ll count=0;
// 	    for(ll i=0 ; i<n-1 ; i++)
// 	    {
// 	        if(v[i]>x)
// 	        {
// 	            count=count+v[i]-l;
// 	            l=v[i];
// 	        }
// 	    }
// 	    count=count+(x-l);
// 	    cout << count << endl;
// 	}
cout << *max_element(v.begin(),v.end())<<endl;
	return 0;
}