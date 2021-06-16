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
    ll a[n],b[n];
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    for(ll i=0 ; i<n ; i++)
    {
        cin>>b[i];
    }
    map<ll,vector<ll>> m;
    for(ll i=0; i<n ; i++)
    {
        m[a[i]].push_back(b[i]);
    }
    bool c[n+1]={false};
    ll ans=0;
    for(ll i=1 ; i<=n ; i++)
    {
        if(c[i]==false)
        {
            ans++;
            queue<ll> q;
            q.push(i);
            while(q.empty()==false)
            {
                ll temp=q.front();
                q.pop();
                if(c[temp]==false)
                {
                    c[temp]=true;
                    q.push(m[temp][0]);
                }
                else
                {
                    break;
                }
                
                
                
            }
        }
    }
    // cout<<pow(2,ans,1000000007)<<endl;
    ll l=1;
    for(ll i=1 ; i<=ans ; i++)
    {
        l=l*2;
        l=l%1000000007;
    }
    cout<<l<<endl;
 
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