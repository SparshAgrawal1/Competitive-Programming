#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
 
 
int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[n];
	for(ll i=0 ;i<n ; i++)
    {
        cin>>a[i];
    }
    unordered_set<ll> s;
    vector<ll> v;
    for(ll i=n-1 ; i>=0 ; i--)
    {
        s.insert(a[i]);
        v.push_back(s.size());
    }
    reverse(v.begin(),v.end());
    while(m--)
    {
        ll x;
        cin>>x;
        cout << v[x-1] << endl;
    }
//    for(auto x:v)
//    {
//        cout << x << " ";
//    }
	return 0;
}