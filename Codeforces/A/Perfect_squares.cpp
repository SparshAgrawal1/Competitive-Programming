#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
ll sumDigits(ll no)
 {
   return no == 0 ? 0 : no%10 + sumDigits(no/10) ;
 }
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(ll i=n-1 ; i>=0 ; i--)
    {
        ll l=sqrt(a[i]);
        if(l*l!=a[i])
        {
            cout<<a[i]<<endl;
            break;
        }
    }
}
 
int main()
{
    fast;
    solve();
	return 0;
}