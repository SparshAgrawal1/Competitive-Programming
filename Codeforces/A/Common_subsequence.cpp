#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> v1,v2;
        unordered_map<ll,ll> s;
        for(ll i=0 ; i<n ; i++)
        {
            ll a;cin>>a;
            v1.push_back(a);
            s[a]++;
        }
        ll l;
        bool flag=false;
        for(ll i=0 ; i<m ; i++)
        {
            ll a;cin>>a;
            v2.push_back(a);
            if(s.find(a)!=s.end())
            {
                l=a;
                flag=true;
            }
        }
        if(flag==false)
        {
            cout << "NO" <<endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << 1 << " " << l << endl;
        }
    }
    return 0;
}
