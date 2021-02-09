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
   ll n,m;
   cin>>n>>m;
   vector<string> v;
   for(ll i=0 ; i<n ; i++)
   {
       string s;cin>>s;
       v.push_back(s);
   }
   ll a[m]={-1};
   for(ll i=0 ; i<n ; i++)
   {
       string s=v[i];
       for(ll j=0 ; j<m ; j++)
       {
            ll k=s[j]-'0';
           a[j]=max(a[j],k);
       }
   }
   ll ans=0;
   for(ll i=0 ; i<n ; i++)
   {
       string s=v[i];
       bool flag=false;
       for(ll j=0 ; j<m ; j++)
       {
            ll k=s[j]-'0';
            if(k==a[j])
            {
                flag=true;
                ans++;
                break;
            }
       }
   }
   cout<<ans<<endl;
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