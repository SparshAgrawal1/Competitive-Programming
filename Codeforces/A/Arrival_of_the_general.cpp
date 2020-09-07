#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
 
    return (a.first > b.first);
 
 
 
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 
int main()
{
    fast;
    ll n;
    cin>>n;
    ll a[n];
    ll a1=INT_MAX;
    ll a2=INT_MIN;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        a1=min(a1,a[i]);
        a2=max(a2,a[i]);
    }
    if(a[0]==a2&&a[n-1]==a1)
    {
        cout<<0<<endl;
    }
    else
    {
        ll l;
        for(ll i=0 ; i<n ; i++)
        {
            if(a[i]==a1)
            {
                l=i;
            }
        }
        ll count=0;
        count+=(n-(l+1));
        for(ll i=l ; i<n-1 ; i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=a1;
        for(ll i=0 ; i<n ; i++)
        {
            if(a[i]==a2)
            {
                l=i;
                break;
            }
        }
        count+=(l);
        cout<<count<<endl;
    }
    return 0;
}