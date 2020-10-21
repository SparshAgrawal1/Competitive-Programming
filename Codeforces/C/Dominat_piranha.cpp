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
    ll t;cin>>t;
 
    while(t--)
    {
        ll n;cin>>n;
        ll a[n];
        vector<ll> v;
        ll ans=-1;
        ll l;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
            ans=max(ans,a[i]);
        }
        bool flag=false;
        for(ll i=0 ; i<n ; i++)
        {
            if(a[i]==ans)
            {
                if(i==0)
                {
                    if(a[i+1]<ans)
                    {
                        flag=true;
                        v.push_back(i+1);
                        break;
 
                    }
                }
                else if(i==n-1)
                {
                    if(a[i-1]<ans)
                    {
                        flag=true;
                        v.push_back(i+1);
                        break;
                    }
                }
                else
                {
                    if(a[i-1]<ans||a[i+1]<ans)
                    {
                        flag=true;
                        v.push_back(i+1);
                        break;
                    }
                }
            }
 
        }
        if(flag==true)
        {
            cout<<v[0]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
 
 
    }
    return 0;
}