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
   vector<ll> v,f;
   map<ll,ll> m1,m2;
   for(ll i=0 ; i<n ; i++)
   {
       ll a;cin>>a;v.push_back(a);f.push_back(a);
       m1[a]++;
       m2[a]++;
   }
   if(m1.size()==1)
   {
       cout<<0<<endl;
   }
   else
   {
       sort(v.begin(),v.end());
        ll l = 0;
        ll ans = 0;
        for (ll i = 1; i < n; i++)
        {
            if (v[i] > v[l])
            {
                ans++;
                l++;
            }
        }
        cout << ans;
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