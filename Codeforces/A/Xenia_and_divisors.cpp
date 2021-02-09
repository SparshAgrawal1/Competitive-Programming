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
bool sbs(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
 
ll xxxx(ll a,ll b)
{
   while(a>b)
   {
       a=a/3;
   }
   return a;
}
void solve()
{
 
    ll n;cin>>n;
    ll a[n];
    map<ll,ll> m;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    ll l=0;
    ll h=n/3;
    bool flag=false;
    map<ll,vector<ll>> f;
    while(l<h)
    {
        ll p=0;
        ll k;
        for(auto x:m)
        {
            if(p==0&&x.second>0)
            {
                f[l+1].push_back(x.first);
                ll temp=x.first;
                k=x.first;
                p++;
                m[temp]--;
            }
            else
            {
                if(x.first%k==0&&x.first>k&&x.second>0)
                {
                     f[l+1].push_back(x.first);
                     k=x.first;
                     p++;
                     ll temp=x.first;
                     m[temp]--;
 
                }
            }
            if(p==3)
            {
                break;
            }
        }
        if(p!=3)
        {
            flag=true;
            break;
        }
        l++;
    }
    if(flag==true)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(auto x:f)
        {
            for(auto y:f[x.first])
            {
                cout<<y<<" ";
            }
            cout<<endl;
        }
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