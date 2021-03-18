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
 
bool sbs(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
 
bool isPrime(ll num)
{
    bool flag=true;
    for(ll i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
void solve()
{
 
    ll n,k;cin>>n>>k;
    ll l=n/2;
    ll h=n/2;
    if(n%2==0&&h%2!=0)
    {
        cout<<2<<" "<<l-1<<" "<<l-1<<endl;
    }
    else if(n%2==0&&h%2==0)
    {
        cout<<l/2<<" "<<l/2<<" "<<l<<endl;
    }
    else
    {
        cout<<1<<" "<<l<<" "<<l<<endl;
    }
 
 
 
 
}
int main()
{
    fast;
	ll t;
//	t=1;
    cin>>t;
	while(t--)
    {
        solve();
 
    }
	return 0;
}