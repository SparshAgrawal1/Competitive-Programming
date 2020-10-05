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
 
 
void solve()
{
 
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    for(ll i=0 ; i<n ; i++)
    {
        cin>>b[i];
    }
    for(ll i=0 ; i<n ; i++)
    {
        cin>>c[i];
    }
    vector<ll> v;
    for(ll i=0 ; i<n-1 ; i+=2)
    {
            set<ll> s1,s2;
            s1.insert(a[i]);
            s1.insert(b[i]);
            s1.insert(c[i]);
                s2.insert(a[i+1]);
                s2.insert(b[i+1]);
                s2.insert(c[i+1]);
 
            vector<ll> v1,v2;
            for(auto x:s1)
            {
                v1.push_back(x);
            }
            for(auto x:s2)
            {
                v2.push_back(x);
            }
            if(v.size()==0)
            {
                v.push_back(v1[0]);
                ll l=v[0];
                for(ll i=0 ; i<v2.size() ; i++)
                {
                    if(v2[i]!=l)
                    {
                        v.push_back(v2[i]);break;
                    }
                }
            }
            else
            {
                ll l=v[v.size()-1];
                for(ll j=0 ; j<v1.size() ; j++)
                {
                    if(v1[j]!=l)
                    {
                        v.push_back(v1[j]);break;
                    }
                }
                l = v[v.size()-1];
                ll h=v[0];
                if(i+1==n-1)
                {
                    for(ll j=0 ; j<v2.size() ; j++)
                    {
                        if(v2[j]!=l&&v2[j]!=h)
                        {
                            v.push_back(v2[j]);break;
                        }
                    }
                }
                else
                {
                    for(ll j=0 ; j<v2.size() ; j++)
                    {
                        if(v2[j]!=l)
                        {
                            v.push_back(v2[j]);break;
                        }
                    }
                }
 
 
 
        }
 
 
 
    }
    if(n%2!=0)
    {
        set<ll> u;
        u.insert(a[n-1]);
        u.insert(b[n-1]);
        u.insert(c[n-1]);
        vector<ll> k;
        for(auto x:u)
        {
            k.push_back(x);
        }
        ll l=v[0];
        ll h=v[v.size()-1];
        for(ll i=0 ; i<k.size() ; i++)
        {
            if(k[i]!=l&&k[i]!=h)
            {
                v.push_back(k[i]);
                break;
            }
        }
    }
    for(auto x:v)
    {
        cout<<x<< " ";
    }
    cout<<endl;
 
 
 
 
}
 
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
 
 
    return 0;
}