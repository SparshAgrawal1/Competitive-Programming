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
    ll t;
cin>>t;
    while(t--)
    {
        ll n;
    cin>>n;
    ll a[n];
    ll ans=0;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        ans+=a[i];
    }
    if(ans==0)
    {
        cout<<"NO"<<endl;
    }
 
    else if(ans>0)
    {
        cout<<"YES"<<endl;
        sort(a,a+n);
        for(ll i=n-1 ; i>=0 ; i--)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        sort(a,a+n);
        for(ll i=0 ; i<n ; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    }
 
 
    return 0;
}