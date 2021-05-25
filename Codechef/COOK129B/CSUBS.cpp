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

int main()
{
    fast;
	ll t;
    cin>>t;
	for(ll _=1 ; _<=t ; _++)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> v;
        for(ll i=0 ; i<n ; i++)
        {
            ll x;cin>>x;
            v.push_back(x);
        }
        map<ll,vector<ll>> m;
        for(ll i=0 ; i<k ; i++)
        {
            for(ll j=i ; j<n ; j+=k)
            {
                m[i+1].push_back(v[j]);
            }

        }
        ll ans=0;
        for(auto x:m)
        {
             map<ll,ll> f;
             for(auto y:m[x.first])
             {
                 f[y]++;
             }
             ll temp=1;
             for(auto z:f)
             {
                 if(z.second>temp)
                 {
                     temp=z.second;
                 }
             }
             ans+=(m[x.first].size()-temp);
        }
        cout<<ans<<endl;
    }


	return 0;
}
