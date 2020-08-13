#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <algorithm>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
void solve()
{
 
    ll t1=0,n;
	cin>>n;
	for(ll i=1;i<=sqrt(n);i++)
    {
		if((n/i)*i / __gcd(n/i,i)==n)
			t1=i;
	}
	cout<<t1<<" "<<n/t1;
 
}
 
int main()
{
    fast;
    solve();
 
	return 0;
}