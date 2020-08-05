#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
 
int main() 
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll count=0;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        if(5-a[i]>=k)
        {
            count++;
        }
    }
    cout << count/3 << endl;
    
    
    
    return 0;
}