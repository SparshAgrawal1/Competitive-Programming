#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
 
    return (a.first > b.first);
 
 
 
}
 
int main()
{
    fast;
    ll n,s;
    cin>>n>>s;
    vector<pair<ll,ll>> v;
    for(ll i=0 ; i<n ; i++)
    {
        ll a1,a2;
        cin>>a1>>a2;
        v.push_back({a1,a2});
    }
    sort(v.begin(),v.end(),sortbysec);
    ll l=s;
    ll count=0;
    for(ll i=0 ; i<n ; i++)
    {
        count+=(l-v[i].first);
        if(count<v[i].second)
        {
            count+=(v[i].second-count);
        }
//        cout<<count<<endl;
        l=v[i].first;
    }
    count+=(l-0);
    cout<<count<<endl;
//    cout<<count<<endl;
 
 
	return 0;
}