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
   string s;
   cin>>s;
   vector<ll> v;
   ll n=s.size();
   for(ll i=0 ; i<n ; i++)
   {
       ll p=s[i]-'0';
       if(p%2==0)
       {
           v.push_back(i+1);
       }
   }
   if(v.size()==0)
   {
       cout<<-1<<endl;
   }
   else
   {
       vector<string> f;
       bool flag=false;
       for(ll i=0 ; i<v.size() ; i++)
       {
           ll l=s[n-1]-'0';
           ll h=s[v[i]-1]-'0';
           if(l>h)
           {
               flag=true;
               swap(s[n-1],s[v[i]-1]);
               break;
           }
       }
       if(flag==false)
       {
           ll l=s[n-1]-'0';
           ll h=s[v[v.size()-1]-1]-'0';
           swap(s[n-1],s[v[v.size()-1]-1]);
       }
//       sort(f.begin(),f.end());
//       cout<<f[f.size()-1]<<endl;
        cout<<s<<endl;
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