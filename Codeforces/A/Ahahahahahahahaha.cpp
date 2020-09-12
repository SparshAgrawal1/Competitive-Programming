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
 
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll l1=0;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            l1++;
        }
    }
    ll l2=n-l1;
    if(l1<=n/2)
    {
        cout<<l2<<endl;
        for(ll i=0 ; i<l2 ; i++)
        {
            cout<<0<< " ";
        }
        cout<<endl;
    }
    else
    {
        if(l1%2==0)
        {
            cout<<l1<<endl;
            for(ll i=0 ; i<l1 ; i++)
            {
                cout<<1<<" ";
 
            }
            cout<<endl;
        }
        else
        {
            cout<<l1-1<<endl;
            for(ll i=0 ; i<l1-1 ; i++)
            {
                cout<<1<<" ";
 
            }
            cout<<endl;
        }
 
    }
 
}
 
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}