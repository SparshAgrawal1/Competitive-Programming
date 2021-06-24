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
   string s;
   cin>>s;
   ll n=s.length();
   map<ll,vector<ll>> m;
   for(ll i=0 ; i<n-1 ; i++)
   {
        if(s[i]==s[i+1]&&s[i]=='v')
            {
                m[1].push_back(i);
            }
   }
   for(ll i=0 ; i<n ; i++)
   {
        if(s[i]=='o')
            {
                m[0].push_back(i);
            }
   }
   ll curr=0;
   ll temp1=0;
   for(auto x:m[0])
   {
        
        for(ll i=temp1 ; i<m[1].size() ; i++)
        {
            if(m[1][i]<x)
            {
                temp1++;
            }
            else
            {
                break;
            }
        }
        curr+=(temp1*(m[1].size()-temp1));
   }
   cout<<curr<<endl;
   
 
    
 
    
    
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