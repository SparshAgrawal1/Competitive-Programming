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
 
bool isSubSequence(string s1, string s2, ll m, ll n)
{
    if (m == 0) return true;
    if (n == 0) return false;
 
    if (s1[m-1] == s2[n-1])
        return isSubSequence(s1, s2, m-1, n-1);
 
    return isSubSequence(s1, s2, m, n-1);
}
 
void solve()
{
 
    ll n;
    cin>>n;
    map<ll,ll> m;
    for(ll i=1 ; i<=n ; i++)
    {
        ll a;cin>>a;
        ll v[a];
        for(ll j=0 ; j<a ; j++)
        {
            cin>>v[j];
            m[v[j]]++;
        }
    }
    for(auto x:m)
    {
        if(x.second==n)
        {
            cout<<x.first<<" ";
        }
    }
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
int main()
{
//    ll t;cin>>t;
//    while(t--)
//    {
        solve();
//    }
 
 
    return 0;
}