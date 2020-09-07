#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
 
    return (a.first > b.first);
 
 
 
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 
int main()
{
    fast;
    ll n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--)
    {
        vector<ll> v;
        for(ll i=0 ; i<n-1 ; i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                v.push_back(i);
            }
        }
        for(auto x:v)
        {
            swap(s[x],s[x+1]);
        }
    }
    cout<<s;
    return 0;
}