#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <algorithm>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
bool xxxx(ll x)
{
    for(ll i=2 ; i<=sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    fast;
    ll a,b,c;
    cin>>a>>b>>c;
    ll x= sqrt((a*b)/c);
    ll y= sqrt((c*b)/a);
    ll z= sqrt((a*c)/b);
    cout<<4*(x+y+z);
 
	return 0;
}