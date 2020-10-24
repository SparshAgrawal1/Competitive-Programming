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
        ll sum=0;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum==k)
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