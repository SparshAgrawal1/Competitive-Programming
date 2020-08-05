#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
 
 
int main() 
{
    ll a,b;
    cin>>a>>b;
    ll x[a+1];
    for(ll i=1 ; i<=a ; i++)
    {
        cin>>x[i];
    }
    ll count=0;
    ll y=x[b];
    for(ll i=1 ; i<=a ; i++)
    {
        if(x[i]>=y && x[i]>0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}