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
void dfs(vector<ll> &a, unordered_map<ll,ll> &m, ll i, ll k,ll &res,unordered_map<ll,bool> &visit)
{
    if(visit.find(i) != visit.end())
        return;
    if(a[i] == -1)
    {
        visit[i] = true;
        return;
    }
    if(m.find(i) != m.end())
    {
        res = max(res, k-m[i]);
        visit[i] = true;
        return;
    }
    m[i] = k;
    dfs(a, m, a[i], k+1,res,visit);
    visit[i] = true;
}
void solve()
{   
    
    ll n;
    cin>>n;
    map<ll,vector<ll>> m;
    ll l=2;
    for(ll i=1 ; i<n ; i++)
    {
        ll x;
        cin>>x;
        m[x].push_back(l);
        l++;
    }
    ll curr=0;
    for(auto x:m)
    {
        ll l1=m[x.first].size();
        for(auto y:m[x.first])
        {
            if(m.find(y)!=m.end())
            {
                l1--;
            }
        }
        if(l1>=3)
        {
            curr++;
        }
    }
 
    if(curr==m.size())
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
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