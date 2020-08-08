#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
 
int main()
{
    string s;cin>>s;
    ll x=s.length();
    ll n;cin>>n;
    ll a[26];
    ll ans=INT_MIN;
    for(ll i=0 ; i<26 ; i++)
    {
        cin>>a[i];
        ans=max(ans,a[i]);
    }
 
    ll count=0;
 
    for(ll i=0 ; i<x ; i++)
    {
        count=count + (i+1)*a[int(s[i])-97];
    }
    ll h=2*(x+1)+(n-1);
//    cout<<n*h/2<<endl;
    count = count + (ans)*(n*h/2);
    cout<<count<<endl;
 
	return 0;
}