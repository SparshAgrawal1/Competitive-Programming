#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
int main()
{
    ll n;
    cin>>n;
    ll n1=n;
    vector<pair<ll,ll>> v;
    while(n1--)
    {
        ll a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    ll l=INT_MAX;
    ll h=INT_MIN;
    for(ll i=0 ; i<n ; i++)
    {
        l=min(l,v[i].first);
        h=max(h,v[i].second);
    }
    bool flag=true;
    for(ll i=0 ; i<n ; i++)
    {
        if(v[i].first==l && v[i].second==h)
        {
            flag=false;
            cout << i+1 << endl;
        }
    }
    if(flag==true)
    {
        cout << -1<<endl;
    }
 
 
 
 
	return 0;
}