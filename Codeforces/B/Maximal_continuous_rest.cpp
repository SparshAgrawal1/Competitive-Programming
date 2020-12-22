#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
typedef double db;
 
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
 
}
void solve()
{
    ll n;cin>>n;
    vector<ll> v;
    ll a[n];
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            v.push_back(i+1);
        }
    }
        if(v.size()==0)
        {
            cout<<0<<endl;
            return;
        }
    if(v[v.size()-1]==n&&v[0]==1)
    {
        ll ans=INT_MIN;
        ll l=1;
        vector<ll> f;
        for(ll i=0 ; i<v.size()-1 ; i++)
        {
            if(v[i+1]-v[i]==1)
            {
                l++;
                v[i]=-1;
            }
            else
            {
 
                f.push_back(l);
                l=1;
                v[i]=-1;
                break;
            }
        }
        for(ll i=v.size()-1 ; i>0 ; i--)
        {
            if(v[i]-v[i-1]==1)
            {
                l++;
                v[i]=-1;
            }
            else
            {
 
                f.push_back(l);
                l=1;
                v[i]=-1;
                break;
            }
        }
        ll h=f[0]+f[1];
        ans=max(ans,h);
        for(ll i=0 ; i<v.size()-1 ; i++)
        {
            if(v[i]!=-1)
            {
                if(v[i+1]-v[i]==1)
                {
                    l++;
                }
                else
                {
                    ans=max(ans,l);
                    l=1;
                }
            }
        }
        ans=max(ans,l);
        cout<<ans<<endl;
    }
    else
    {
        ll l=1;
        ll ans=INT_MIN;
 
        for(ll i=0 ; i<v.size()-1 ; i++)
        {
            if(v[i+1]-v[i]==1)
            {
                l++;
            }
            else
            {
                ans=max(l,ans);
                l=1;
            }
        }
        ans=max(ans,l);
        cout<<ans<<endl;
    }
 
}
int main()
{
    fast;
	ll t;
	t=1;
//    cin>>t;
	while(t--)
    {
        solve();
 
 
    }
	return 0;
}