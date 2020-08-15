
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n ; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        bool flag=false;
        for(ll i=2 ; i<n ; i++)
        {
            if(a[0]+a[1]<=a[i])
            {
                cout<<1<< " "<<2<<" "<<i+1<<endl;
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            cout<<-1<<endl;
        }
    }
	return 0;
}