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
    ll x=log2(n);
    ll y=pow(2,x);
    cout<<y-1<<endl;
    // ll y=n;
    // vector<ll> v;
    // while(n>0)
    // {
    //     ll x=log2(n);
    //     n=n-pow(2,x);
    //     v.push_back(x);
 
    // }
    // ll curr=0;
    // for(auto x:v)
    // {
    //     curr+=pow(2,x);
    // }
    // cout<<curr<<endl;
    // // for(auto x:v)
    // // {
    // //     cout<<x<<" ";
    // // }
    // // cout<<endl;
    // // cout<<y-v.size()<<endl;
 
    
    
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