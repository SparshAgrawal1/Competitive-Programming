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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
 
}
void solve()
{
    ll n;
    cin>>n;
    if(n>45)
    {
        cout<<-1<<endl;
    }
    else
    {
        vector<ll> s;
        s.push_back(9);s.push_back(8);s.push_back(7);s.push_back(6);s.push_back(5);
        s.push_back(4);s.push_back(3);s.push_back(2);s.push_back(1);
        ll i=0;
        set<ll> v;
        while(n>0)
        {
            if(n-s[i]>=0)
            {
                v.insert(s[i]);
                n-=s[i];
            }
            i++;
        }
        for(auto x:v)
        {
            cout<<x;
        }
        cout<<endl;
 
 
    }
 
 
 
 
}
int main()
{
    fast;
	ll t;
    cin>>t;
	while(t--)
    {
        solve();
 
 
    }
	return 0;
}