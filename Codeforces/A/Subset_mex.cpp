#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define MAX 1000
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
 
 
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        map<ll,ll> s;
        vector<pair<ll,ll>> v;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
 
            s[a[i]]++;
        }
        for(auto x:s)
        {
            v.push_back({x.first,x.second});
        }
            vector<ll> v1,v2;
            for(ll i=0 ; i<v.size() ; i++)
            {
                bool curr=true;
                ll temp=v[i].second;
                while(temp--)
                {
                    if(curr==false)
                    {
                        v2.push_back(v[i].first);
                        curr=!curr;
                    }
                    else
                    {
                        v1.push_back(v[i].first);
                        curr=!curr;
                    }
                }
            }
            ll ans=0;
            set<ll> s1;
            for(auto x:v1)
            {
                s1.insert(x);
            }
            set<ll> s2;
            for(auto x:v2)
            {
                s2.insert(x);
            }
            ll l1=-1;
            ll h1=0;
            for(auto x:s1)
            {
                if(x!=h1)
                {
                    l1=h1;
                    break;
                }
                else
                {
                    h1++;
                }
            }
            if(l1==-1)
            {
                l1=h1;
            }
            ll l2=-1;
            ll h2=0;
            for(auto x:s2)
            {
                if(x!=h2)
                {
                    l2=h2;
                    break;
                }
                else
                {
                    h2++;
                }
            }
            if(l2==-1)
            {
                l2=h2;
            }
            ans+=l1;
            ans+=l2;
            cout<<ans<<endl;
 
 
    }
    return 0;
}