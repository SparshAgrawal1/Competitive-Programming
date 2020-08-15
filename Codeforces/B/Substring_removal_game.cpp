#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <algorithm>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
bool xxxx(ll x)
{
    for(ll i=2 ; i<=sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<ll> v;
        for(ll i=0 ; i<s.length() ; i++)
        {
            if(s[i]=='1')
            {
                v.push_back(i+1);
            }
        }
        if(v.size()==0)
        {
            cout<<0<<endl;
        }
        else
        {
//            for(auto x:v)
//            {
//                cout<<x<<" ";
//            }
//            cout<<endl;
              ll count=1;
              vector<ll> f;
              for(ll i=1 ; i<v.size() ; i++)
              {
                  if(v[i]-v[i-1]==1)
                  {
                      count++;
                  }
                  else
                  {
                      f.push_back(count);
                      count=1;
                  }
              }
                f.push_back(count);
//              for(auto x:f)
//           {
//               cout<<x<<" ";
//            }
//            cout<<endl;
ll ans=0;
            sort(f.begin(),f.end(),greater<ll>());
            for(ll i=0 ; i<f.size() ; i=i+2)
            {
                ans+=f[i];
            }
            cout<<ans<<endl;
        }
    }
	return 0;
}