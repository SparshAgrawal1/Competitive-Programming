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
        ll n,x;cin>>n>>x;
        ll a[n],b[n];
        ll m1=INT_MIN,m2=INT_MIN;
        ll c1=INT_MAX,c2=INT_MAX;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
            m1=max(m1,a[i]);
            c1=min(c1,a[i]);
        }
        for(ll i=0 ; i<n ; i++)
        {
            cin>>b[i];
            m2=max(m2,b[i]);
            c2=min(c2,b[i]);
        }
        sort(a,a+n,greater<ll>());
        sort(b,b+n);
        bool flag=false;
        for(ll i=0 ; i<n ; i++)
        {
            if(a[i]+b[i]>x)
            {
                flag=true;break;
            }
        }
        if(flag==false)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
 
 
 
 
    }
    return 0;
}