#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define MAX 1000
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
void solve()
{
 
    ll n;
    cin >> n;
    vector<pair<ll, ll>> p;
    for(ll i=0 ; i<n ; i++)
    {
        ll a,b;
        cin>>a>>b;
        p.push_back({a,b});
    }
    for(ll i=0 ; i<n ; i++)
    {
        if (p[i].first != p[i].second)
        {
            cout << "rated";
            return;
        }
    }
    for (ll i = 1; i < n; i++)
    {
        if (p[i].first > p[i - 1].first)
        {
            cout << "unrated";
            return;
        }
    }
    cout << "maybe";
    return;
 
 
 
}
 
int main()
{
    ll t=1;
//    cin>>t;
    while(t--)
    {
        solve();
    }
 
 
    return 0;
}