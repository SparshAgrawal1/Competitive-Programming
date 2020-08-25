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
	ll t;
	cin>>t;
	while(t--)
    {
        ll n;cin>>n;
        string s;cin>>s;
        for(ll i=0 ; i<2*n-1 ; i=i+2)
        {
            cout<<s[i]<<"";
        }
        cout<<endl;
    }
	return 0;
}