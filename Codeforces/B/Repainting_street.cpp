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
 
bool sortbyvec(vector<double> v1,vector<double> v2)
{
    return v1[2]>v2[2];
}
 
 
void solve()
{
    ll n,k;
   cin>>n>>k;
   ll a[n];
   map<ll,ll> m;
   set<ll> s;
   for(ll i=0 ; i<n ; i++)
   {
       cin>>a[i];
       m[a[i]]++;
       s.insert(a[i]);
   }
    ll fi=INT_MAX;
   for(auto x:s)
   {
       ll h=x;
       vector<ll> v;
       for(ll i=0 ; i<n ; i++)
       {
           if(a[i]!=h)
           {
               v.push_back(i+1);
           }
       }
       ll l=-1;
       h=-1;
       ll ans=0;
       ll j=0;
       while(j<v.size())
       {
          if(l==-1)
          {
              l=v[j];
              h=v[j]+k-1;
          }
          if(v[j]>h)
          {
              l=-1;
              ans++;
          }
          else
          {
              j++;
          }
 
       }
       if(l!=-1)
       {
           ans++;
       }
       fi=min(fi,ans);
   }
 
   cout<<fi<<endl;
 
 
}
 
int main()
{
    fast;
	ll t;
//	t=1;
    cin>>t;
	while(t--)
    {
        solve();
    }
 
 
	return 0;
}