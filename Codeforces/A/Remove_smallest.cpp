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
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
 
        }
        sort(a,a+n);
        bool flag=true;
        for(ll i=0 ; i<n-1 ; i++)
        {
            if(a[i+1]-a[i]>1)
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
 
}