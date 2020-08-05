#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
 
 
int main() 
{
    ll n;cin>>n;
    ll count=0;
    while(n--)
    {
        ll ans=0;
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==1)
        {
            ans++;
        }
        if(b==1)
        {
            ans++;
        }
        if(c==1)
        {
            ans++;
        }
        if(ans>=2)
        {
            count++;
        }
        
    }
    cout << count << endl;
    return 0;
}