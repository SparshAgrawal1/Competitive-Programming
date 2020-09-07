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
        ll n,x;
        cin>>n>>x;
        ll a[n];
        set<ll> s;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        vector<ll> v;
        for(auto x:s)
        {
            v.push_back(x);
        }
        ll l=1;
        for(ll i=0 ; i<v.size() ; i++)
        {
            if(v[i]!=i+1)
            {
                bool flag=false;
                for(ll j=l ; j<v[i] ; j++)
                {
                    s.insert(j);
                    x--;
                    if(x==0)
                    {
                        flag=true;
                        break;
                    }
                }
                if(flag==true)
                {
                    break;
                }
                l=v[i]+1;
            }
            else
            {
                l=v[i]+1;
            }
        }
        vector<ll> j;
        for(auto x:s)
        {
            j.push_back(x);
        }
        ll h;
        for(ll i=0 ; i<j.size() ; i++)
        {
            if(j[i]==i+1)
            {
                h=j[i];
 
            }
            else
            {
                break;
            }
        }
        if(x==0)
        {
          cout<<h<<endl;
        }
        else
        {
            cout<<h+x<<endl;
        }
 
    }
 
    return 0;
 
}