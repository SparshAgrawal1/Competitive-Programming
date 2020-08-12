#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
typedef double db;
 
 
int main()
{
    fast;
 
    ll n,s,t;
	cin>>n>>s>>t;
	ll a[n+1];
	for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
    }
	int k;
	for(k=0 ; s!=t&&a[s]!=0 ; k++)
	{
		ll curr=a[s];
		a[s]=0;
		s=curr;
	}
	if(s==t)
		cout<<k;
	else
		cout<<-1;
	return 0;
 
}