#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
 
 
int main()
{
	ll n;
	cin >> n;
	ll a[n];
	for(ll i=0 ; i<n; i++)
    {
        cin >> a[i];
    }
	sort(a,a+n);
	ll ans=0;
	for(ll i=0;i<n;i++)
    {
		ans+=abs(a[i]-i-1);
	}
	cout << ans<<endl;
 
	return 0;
}