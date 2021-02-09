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
 
    ll n, a1, a2, b1, b2;
    cin >> n >> a1 >> a2 >> b1 >> b2;
    string s;cin >> s;
    ll l = b1 - a1;ll h = b2 - a2;
    ll ans = -1;
    for(ll i=0 ; i<n ; i++)
    {
        if (s[i] == 'S')
        {
            if (h < 0)
            {
                h++;
            }
        }
        if (s[i] == 'N')
        {
            if (h > 0)
            {
                h--;
            }
        }
        if (s[i] == 'E')
        {
            if (l > 0)
            {
                l--;
            }
        }
        if (s[i] == 'W')
        {
            if (l < 0)
            {
                l++;
            }
        }
        if (h == 0 && l == 0)
        {
            ans = i + 1;
            break;
        }
    }
    cout << ans <<endl;
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