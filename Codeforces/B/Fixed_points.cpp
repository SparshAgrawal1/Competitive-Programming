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
    ll a[n];
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    map<ll,ll> m;
    set<ll> s;
    ll ans=0;
    for(ll i=0 ; i<n ; i++)
    {
        if(a[i]!=i)
        {
            m[i]=a[i];
            s.insert(a[i]);
        }
        else
        {
            ans++;
        }
    }
    bool flag1=false;
    for(auto x:m)
    {
        ll temp1=x.first;
        ll temp2=x.second;
        if(m.find(temp2)!=m.end()&&m[temp2]==temp1)
        {
            flag1=true;
            break;
        }
    }
    if(flag1==true)
    {
        cout<<ans+2<<endl;
    }
    else
    {
        if(ans<n)
        {
            cout<<ans+1<<endl;
        }
        else
        {
            cout<<ans<<endl;
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