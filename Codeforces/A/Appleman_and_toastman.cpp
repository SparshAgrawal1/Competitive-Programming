#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	ll n;cin>>n;
	ll a[n];
	ll b[n]={0};
	ll count=0;
	for(ll i=0 ; i<n ; i++)
	{
	    cin>>a[i];
	}
	sort(a,a+n);
	b[n-1]=a[n-1];
	for(ll i=n-2 ; i>=0 ; i--)
	{
	    b[i]=a[i]+b[i+1];
	}
	count+=b[0];
	for(ll i=1 ; i<n ; i++)
	{
	    count+=b[i];
	    count+=a[i-1];
	    
	}
	cout << count << endl;
	return 0;
}