#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	map<ll,ll> m,q;
	for(ll i=0 ; i<n ; i++)
    {
 
        cin>>a[i];
        m[a[i]]++;
    }
    ll count=0;
    for(auto x:m)
    {
        if(x.first<=n)
        {
                 count+=x.second-1;
        }
        else
        {
 
            count+=x.second;
        }
 
    }
    cout << count << endl;
	return 0;
}