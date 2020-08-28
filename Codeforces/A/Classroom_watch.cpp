include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
ll sumDigits(ll no)
 {
   return no == 0 ? 0 : no%10 + sumDigits(no/10) ;
 }
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v;
    ll l=1;
    for(ll i=max(l,n-1000) ; i<=n ; i++)
    {
        if(i+sumDigits(i)==n)
        {
            v.push_back(i);
        }
    }
    cout<<v.size()<<endl;
    for(auto x:v)
    {
        cout<<x<<endl;
    }
 
}
 
int main()
{
    fast;
    solve();
	return 0;
}