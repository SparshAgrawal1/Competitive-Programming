#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
 
 
int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[m];
	for(ll i=0 ; i<m ; i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    ll ans=INT_MAX;
    for(ll i=0 ;i<=m-n ; i++)
    {
        ans=min(ans,a[i+n-1]-a[i]);
    }
    cout << ans<<endl;
 
	return 0;
}
