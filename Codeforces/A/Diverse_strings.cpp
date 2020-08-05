#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
 
int main() 
{
    ll t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.length();
        bool flag=false;
        map<ll,ll> m;
        for(ll i=0 ; i<n ; i++)
        {
            m[s[i]]++;
        }
        vector<pair<ll,ll>> v;
        for(auto curr:m)
        {
            v.push_back({curr.first,curr.second});
        }
        ll x=v[0].first;
        ll y=v[0].second;
        for(ll i=1 ; i<v.size(); i++)
        {
            if(v[i].first-x==1)
            {
                if(v[i].second==1)
                {
                    x=v[i].first;
                }
                else
                {
                    flag=true;
                    break;
                }
            }
            else
            {
                flag=true;
                break;
            }
        }
        if(y!=1)
        {
            flag=true;
        }
        if(flag==true)
        {
            cout << "No" <<endl;
        }
        else
        {
            cout << "Yes" <<endl;
        }
        
    }
    
    return 0;
}