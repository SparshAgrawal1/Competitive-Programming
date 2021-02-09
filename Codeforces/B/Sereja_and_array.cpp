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
   ll n,m;
   cin>>n>>m;
   vector<ll> v;
   for(ll i=0 ; i<n ; i++)
   {
       ll x;cin>>x;v.push_back(x);
   }
   ll s=0;
   while(m--)
   {
       ll q, w, e;
        cin >> q >> w;
        if (q == 1)
        {
            cin >> e;
            v[w - 1] = e - s;
        }
        else if (q == 2)
        {
            s += w;
        }
        else
        {
            cout << v[w - 1] + s << endl;
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