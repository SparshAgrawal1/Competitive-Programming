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
   ll n;cin>>n;
   if(n<2020)
   {
       cout<<"NO"<<endl;
       return;
   }
   ll k=n/2020;
   bool flag=false;
   for(ll i=0 ; i<=k+1 ; i++)
   {
 
       if((i*2020 + (k-i)*2021)==n)
       {
           flag=true;break;
       }
   }
   if(flag==false)
   {
       cout<<"NO"<<endl;
   }
   else
   {
       cout<<"YES"<<endl;
   }
 
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