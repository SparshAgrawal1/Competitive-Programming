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
 
 
int main()
{
    ll n,m;cin>>n>>m;
    vector<pair<ll,ll>> v;
    ll curr=0;
    for(ll i=0 ; i<n ; i++)
    {
        ll x1,x2;cin>>x1>>x2;
        curr+=x1;
        v.push_back({x1-x2,x1});
    }
    sort(v.begin(),v.end());
    ll l=n-1;
    ll temp=0;
    while(curr>m&&l>=0)
    {
        curr-=v[l].first;
        temp++;
        l--;
    }
    if(curr>m)
    {
        cout<<-1;
    }
    else
    {
        cout<<temp;
    }
 
 
 
    return 0;
}