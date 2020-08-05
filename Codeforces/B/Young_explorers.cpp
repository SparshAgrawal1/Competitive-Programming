#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
	ll t;cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		map<ll,ll,greater<ll>> m;
		for(ll i=0 ; i<n ; i++)
		{
			cin>>a[i];
//			m[a[i]]++;
		}
		sort(a,a+n);
		ll count=0;
		ll ans=0;
		for(ll i=0 ; i<n ; i++)
		{
		    ans++;
		    if(a[i]<=ans)
            {
                count++;
                ans=0;
            }
		}
        cout << count << endl;
	}
	return 0;
}