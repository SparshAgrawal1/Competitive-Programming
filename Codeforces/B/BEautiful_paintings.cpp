#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
int main()
{
      fast;
      ll n;
        cin>>n;
        ll b[1005]={0};
 
	for(ll i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		b[a]++;
	}
 
	cout<<n-*max_element(b,b+1005);
 
	return 0;
 
}