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
   ll n,k;cin>>n>>k;
   ll a[n],b[n];
   for(ll i=0 ; i<n ; i++)
   {
       cin>>a[i];
       b[i]=a[i];
   }
   sort(a,a+n,greater<ll>());sort(b,b+n);
   ll ans=0;
   ll l=0;
   ll h=n-1;
       for(ll i=0 ; i<n ; i++)
       {
           if(a[i]>=k)
           {
               ans++;
               h--;
           }
           else
           {
               bool flag=true;
               for(ll j=l ; j<h ; j++)
               {
                   if(a[i]+b[j]>=k)
                   {
                       ans++;
                       l=j+1;
                       flag=false;
                       break;
                   }
               }
               if(flag==false)
               {
                   h--;
               }
           }
       }
 
   cout<<ans<<endl;
 
 
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