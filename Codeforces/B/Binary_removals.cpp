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
    string s;cin>>s;
    ll n=s.size();
    ll ans=-1;
    for(ll i=1 ; i<n ; i++)
    {
        if(s[i]=='1'&&s[i-1]=='1')
        {
            ans=i;
            break;
        }
    }
    if(ans==-1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        bool flag=false;
        for(ll i=ans+1 ; i<n ; i++)
        {
            if(s[i]=='0'&&s[i-1]=='0')
            {
                flag=true;break;
            }
        }
        if(flag==true)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
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