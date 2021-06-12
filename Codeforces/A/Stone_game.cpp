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
    for(ll i=0 ; i<n ; i++)
    {
        ll x;cin>>x;
        v.push_back(x);
    }
    ll l1=INT_MIN;
    ll l2=INT_MAX;
    ll h1=0;
    ll h2=0;
    for(ll i=0 ; i<n ; i++)
    {
        if(v[i]>l1)
        {
            l1=v[i];
            h1=i+1;
        }
        if(v[i]<l2)
        {
            l2=v[i];
            h2=i+1;
        }
    }
 
    ll h=max(h1,h2);
    ll k=min(h1,h2);
    cout<<min(h,min(n-k+1,k+n-h+1))<<endl;
 
 
 
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