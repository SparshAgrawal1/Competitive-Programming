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
  ll n,k;
  cin>>n>>k;
  vector<ll> v;
  map<ll,set<ll>> m;
  bool p[n*k + 1]={false};
  for(ll i=0 ; i<k ; i++)
  {
      ll a;cin>>a;
      m[i+1].insert(a);
      p[a]=true;
  }
 
  ll q=1;
   for(ll i=1 ; i<=k ; i++)
   {
       ll l=n-1;
        ll h=0;
       while(h!=l)
       {
           if(p[q]==false)
           {
               m[i].insert(q);
               p[q]=true;
               q++;
               h++;
           }
           else
           {
               q++;
           }
       }
 
   }
   for(auto x:m)
   {
       ll temp=x.first;
       for(auto y:m[x.first])
       {
           cout<<y<<" ";
       }
       cout<<endl;
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