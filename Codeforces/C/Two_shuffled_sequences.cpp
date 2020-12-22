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
 
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
 
}
void solve()
{
    ll n;cin>>n;
    map<ll,ll> m;
    ll a[n];
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    bool flag=false;
    for(auto x:m)
    {
        if(x.second>2)
        {
            flag=true;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"NO"<<endl;
        return;
    }
    vector<ll> v;
    for(auto x:m)
    {
        v.push_back(x.first);
        m[x.first]--;
    }
    vector<ll> f;
    for(auto x:m)
    {
        if(x.second>0)
        {
            f.push_back(x.first);
        }
    }
    cout<<"YES"<<endl;
    cout<<f.size()<<endl;
    for(auto x:f)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    for(ll k=v.size()-1 ; k>=0 ; k--)
    {
        cout<<v[k]<<" ";
    }
    cout<<endl;
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