#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
void solve()
{
	ll n;
	cin>>n;
	ll l=1;
	ll h=n*n;
	for(ll i=1 ; i<=n ; i++)
    {
        for(ll i=1 ; i<=n/2 ; i++)
        {
            cout<<l<<" ";
            l++;
        }
        for(ll i=1 ; i<=n/2 ; i++)
        {
            cout<<h<<" ";
            h--;
        }
        cout<<endl;
    }
 
}
 
int main()
{
    solve();
	return 0;
}