#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
      fast;
 
    ll t;cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll b[n];
        ll curr1=INT_MAX;
        ll curr2=INT_MAX;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
            curr1=min(curr1,a[i]);
        }
        for(ll i=0 ; i<n ; i++)
        {
            cin>>b[i];
            curr2=min(curr2,b[i]);
        }
        ll count=0;
        for(ll i=0 ; i<n ; i++)
        {
//            if(a[i]==curr1&&b[i]!=curr2)
//            {
//                count+=b[i]-curr2;
//            }
//            else if(a[i]!=curr1&&b[i]==curr2)
//            {
//                count+=a[i]-curr1;
//            }
//            else if(a[i]==curr1&&b[i]==curr2)
//            {
//                count+=0;
//            }
//            else
//            {
                ll l=a[i]-curr1;
                ll h=b[i]-curr2;
                ll curr=min(l,h);
//                ll temp=
                l=l-curr;
                h=h-curr;
                count=count+curr;
                count+=l;
                count+=h;
//            }
 
        }
        cout<<count<<endl;
 
    }
    return 0;
 
}