#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
ll find(ll A, ll B)
{
    ll j = 0;
    ll x = 0;
    while (A || B)
    {
        if ((A & 1) && (B & 1))
        {
            x += (1 << j);
        }
 
        A >>= 1;
        B >>= 1;
        j += 1;
    }
    return x;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll x=a|b;
        ll y=a&b;
        cout<<x-y<<endl;
 
 
    }
    return 0;
}