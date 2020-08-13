#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
void solve()
{
 
    ll n;
        cin>>n;
        ll a[n];
        for(ll i=0 ; i<n ; i++)
        {
 
            cin>>a[i];
        }
        ll sum=0;
        for(ll i=0 ; i<n ; i++)
        {
            sum+=a[i];
            if(sum<=0)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
//        rtrfertv
        sum=0;
        for(ll i=n-1 ; i>=0 ; i--)
        {
            sum+=a[i];
            if(sum<=0)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
}
 
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
 
	return 0;
}