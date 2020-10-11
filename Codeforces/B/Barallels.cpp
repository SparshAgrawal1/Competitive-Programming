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
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll ans=a[n-1];
        ll l=n-2;
        while(k>0)
        {
            if(l<0)
            {
                break;
            }
            ans+=a[l];
            l--;
            k--;
        }
        cout<<ans<<endl;
    }
 
 
    return 0;
}