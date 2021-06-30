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
    // cout<<n<<" ";
    ll a[n]={-1};
    ll l=1;
    for(ll i=0 ; i<n ; i++)
    {
        a[i]=l;
        l++;
    }
    if(n%2==0)
    {
        for(ll i=0 ; i<n ; i+=2)
        {
            ll l1=a[i];
            ll l2=a[i+1];
            a[i]=l2;
            a[i+1]=l1;
        }
        for(ll i=0 ; i<n ; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        
        for(ll i=1 ; i<n ; i+=2)
        {
            swap(a[i],a[i+1]);
        }
        swap(a[0],a[1]);
        for(ll i=0 ; i<n ; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
 
 
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
   cin>>t;
    // t=1;
	while(t--)
    {
        solve();
        
    }
 
 
	return 0;
}
