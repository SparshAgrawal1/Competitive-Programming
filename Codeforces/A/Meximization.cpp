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
 
bool isPrime(ll num)
{
    bool flag=true;
    for(ll i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
void solve()
{
    ll n;cin>>n;
    vector<ll> v;
    map<ll,ll> m;
    for(ll i=0 ; i<n ; i++)
    {
        ll x;cin>>x;
        v.push_back(x);
        m[x]++;
    }
    while(m.empty()==false)
    {
        bool flag=false;
        for(auto x:m)
        {
            if(x.second>0)
            {
                cout<<x.first<<" ";
                ll temp=x.first;
                m[temp]--;
                flag=true;
            }
        }
        if(flag==false)
        {
            break;
        }
 
    }
    cout<<endl;
 
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