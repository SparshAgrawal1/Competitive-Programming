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
   ll n,x;
   cin>>n>>x;
   vector<ll> v;
   ll ans=0;
   bool a1[x+1]={false};
   bool a2[x+1]={false};
   for(ll i=0 ; i<n ; i++)
   {
       ll j;cin>>j;v.push_back(j);
       ans+=j;
       if(j>=0)
       {
           a1[j]=true;
       }
       else
       {
           a2[j]=true;
       }
   }
   if(ans==0)
   {
       cout<<0<<endl;
   }
   else
   {
       if(ans<0)
       {
           ans=-1*ans;
           ll p=ans/x;
           ll q=ans%x;
           if(q==0)
           {
               cout<<p<<endl;
           }
           else
           {
               cout<<p+1<<endl;
           }
 
       }
       else
       {
           ll p=ans/x;
           ll q=ans%x;
           if(q==0)
           {
               cout<<p<<endl;
           }
           else
           {
               cout<<p+1<<endl;
           }
       }
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
