#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
 
int main() 
{
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
        ll ans=(n-1)/2;
        ll count1=0;
        ll count2=0;
        for(ll i=0 ; i<n-1 ; i++)
        {
            if(a[i+1]>=a[i])
            {
                count1++;
            }
            if(a[i+1]<=a[i])
            {
                count2++;
            }
        }
        
            
        for(ll i=0 ; i<n ; i++)
        {
            if(i%2==0)
            {
                cout << abs(a[i]) << " ";
            }
            else 
            {
                cout << -abs(a[i]) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}