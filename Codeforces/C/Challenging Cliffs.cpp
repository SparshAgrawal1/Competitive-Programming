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
 
bool isPrime(ll num)
{
    bool flag=true;
    for(ll i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
 
void xxxx(map<ll,vector<pair<ll,ll>>> p, ll l, vector<ll> a, bool b[])
{
            b[l]=true;
            for(auto x:p[l])
            {
                ll y1=x.first;
                ll y2=x.second;
                a[y1]=min(a[y1],a[l]+y2);
                xxxx(p,y1,a,b);
            }
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v;
    map<ll,ll> m;
    for(ll i=0 ; i<n ; i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
        m[x]++;
    }
    sort(v.begin(),v.end());
    ll l=INT_MAX;
    ll l1=-1;
    ll l2=-1;
    for(ll i=0 ; i<v.size()-1 ; i++)
    {
        ll h=v[i+1]-v[i];
        if(l>h)
        {
            l=h;
            l1=v[i];
            l2=v[i+1];
        }
    }
    ll a[n]={-1};
    // ll b[n]={-1};
    a[0]=l1;
    // b[0]=l1;
    // b[n-1]=l2;
    a[n-1]=l2;
    m[l1]--;
    m[l2]--;
    if(m[l1]==0)
    {
        m.erase(l1);
    }
    if(m[l2]==0)
    {
        m.erase(l2);
    }
    vector<ll> f;
    for(auto x:m)
    {
        ll k1=x.first;
        ll k2=x.second;
        while(k2--)
        {
            f.push_back(k1);
        }
 
    }
    vector<ll> g;
    ll p3=1;
    for(ll i=0; i<f.size() ; i++)
    {
        if(f[i]>=a[0])
        {
            a[p3]=f[i];
            p3++;
        }
        else
        {
            g.push_back(f[i]);
        }
    }
    for(auto x:g)
    {
        a[p3]=x;
        p3++;
    }
 
    for(ll i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    
    
}
 
int main()
{
    fast;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r" , stdin);
  freopen("output.txt", "w", stdout);
#endif
	ll t;
   cin>>t;
    // t=1;
	while(t--)
    {
        solve();
        
    }
 
 
	return 0;
}