#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define MAX 1000
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
    fast;
    ll n;cin>>n;
    string s;cin>>s;
 
    vector<ll> v;
    ll u=0,d=0,l=0,r=0;
    for(ll i=0 ; i<n ; i++)
    {
        if(s[i]=='U')
        {
            u++;
        }
        else if(s[i]=='D')
        {
            d++;
        }
        else if(s[i]=='L')
        {
            l++;
        }
        else if(s[i]=='R')
        {
            r++;
        }
    }
    cout<<(min(l,r)*2)+(min(u,d)*2)<<endl;
 
 
    return 0;
}