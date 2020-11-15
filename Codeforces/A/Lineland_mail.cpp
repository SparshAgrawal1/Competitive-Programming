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
    fast;
    ll t;
    t=1;
 
 
    while(t--)
    {
        ll n;cin>>n;
        ll a[n];
        map<ll,ll> m;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
            m[a[i]]=i;
        }
        map<ll,vector<ll>> k;
        sort(a,a+n);
        ll h=n-1;
        ll l=0;
        for(ll i=0 ; i<n ; i++)
        {
            if(i==0)
            {
                ll x=a[h]-a[i];
                ll y=a[i+1]-a[i];
                k[m[a[i]]].push_back(y);k[m[a[i]]].push_back(x);
            }
            else if(i==n-1)
            {
                ll x=a[i]-a[l];
                ll y=a[i]-a[i-1];
                k[m[a[i]]].push_back(y);k[m[a[i]]].push_back(x);
            }
            else
            {
                ll x1=a[h]-a[i];
                ll x2=a[i]-a[l];
                ll y1=a[i+1]-a[i];
                ll y2=a[i]-a[i-1];
                k[m[a[i]]].push_back(min(y1,y2));k[m[a[i]]].push_back(max(x1,x2));
            }
        }
        for(auto x:k)
        {
            vector<ll> p = k[x.first];
            for(auto y:p)
            {
                cout<<y<<" ";
            }
            cout<<endl;
        }
 
 
 
    }
    return 0;
}