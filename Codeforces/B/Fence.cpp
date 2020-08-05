#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
    fast;
    ll n,k;
    ll s=0;
    ll ans=0;
	cin >> n >> k;
	ll a[n];
	for(ll i=0;i<n;i++)
    {
        cin >> a[i];
    }
 
	for(ll i=0 ;i<k;i++)
    {
        s+=a[i];
    }
	ll minn=s;
	ans=k-1;
	for(ll i=k;i<n;i++)
    {
		s+=a[i];
		s-=a[i-k];
		if(s< minn)
		{
			minn=s;
			ans=i;
		}
	}
	cout << ans-k+2 << endl;
 
 
 
	return 0;
}