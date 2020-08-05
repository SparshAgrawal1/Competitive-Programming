#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
 
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll count=0;
        while(n>=10)
        {
            ll x=n/10;
            ll y=n%10;
            ll z=x*10;
            count=count+(z);
            n=y+x;
        }
        count=count+n;
        cout<<count<< endl;
    }
    // cout << count << endl;
    
    return 0;
}