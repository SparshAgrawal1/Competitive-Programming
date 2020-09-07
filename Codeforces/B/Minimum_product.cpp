#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
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
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        ll l1=a-x;
        ll l2=b-y;
        if(l1>l2)
        {
            ll a1=a,b1=b,n1=n;
            ll l=min(l1,n);
            a=a-l;
            n=n-l;
            if(n>0)
            {
                b=b-min(n,l2);
            }
            ll ans1=a*b;
            l=min(l2,n1);
            b1=b1-l;
            n1=n1-l;
            if(n1>0)
            {
                a1=a1-min(n1,l1);
            }
            ll ans2=a1*b1;
            cout<<min(ans1,ans2)<<endl;
        }
        else
        {
            ll a1=a,b1=b,n1=n;
            ll l=min(l2,n);
            b=b-l;
            n=n-l;
            if(n>0)
            {
                a=a-min(n,l1);
            }
            ll ans1=a*b;
            l=min(l1,n1);
            a1=a1-l;
            n1=n1-l;
            if(n1>0)
            {
                b1=b1-min(n1,l2);
            }
            ll ans2=a1*b1;
            cout<<min(ans1,ans2)<<endl;
        }
 
    }
  return 0;
 
}