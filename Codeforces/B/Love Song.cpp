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
    ll n,q;
    cin>>n>>q;
    // map<ll,ll> m;
    string s;
    cin>>s;
    vector<ll> v;
    for(ll i=0 ; i<n ; i++)
    {
        if(i==0)
            v.push_back((s[i]-'a'+1));
        else
            v.push_back((s[i]-'a'+1)+v[i-1]);
    }
    while(q--)
    {
        ll a1,a2;
        cin>>a1>>a2;
        if(a1-2<0)
        {
            cout<<v[a2-1]<<endl;
        }
        else
        {
            cout<<v[a2-1]-v[a1-2]<<endl;
        }
        
 
    }
    
    
}
 
int main()
{
    fast;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r" , stdin);
  freopen("output.txt", "w", stdout);
#endif
	ll t;
   // cin>>t;
    t=1;
	while(t--)
    {
        solve();
        
    }
 
 
	return 0;
}