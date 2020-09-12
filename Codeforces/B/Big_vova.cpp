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
    cin>>n;
    ll a[n];
    ll l1=INT_MIN;
    ll l2;
    set<ll> s;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        if(a[i]>l1)
        {
            l1=a[i];
            l2=i;
        }
    }
    s.insert(l2);
    vector<ll> v;
    v.push_back(l1);
    ll l=v[0];
    while(v.size()!=n)
    {
        ll h1=INT_MIN;
        ll h2;
        for(ll i=0 ; i<n ; i++)
        {
            if(s.find(i)==s.end())
            {
                if(__gcd(a[i],l)>h1)
                {
                    h1=__gcd(a[i],l);
                    h2=i;
                }
            }
        }
        v.push_back(a[h2]);
        s.insert(h2);
        l=h1;
    }
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
 
 
}
 
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
