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
 
bool sortbyvec(vector<double> v1,vector<double> v2)
{
    return v1[2]>v2[2];
}
 
 
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll ans1=0;
    ll ans2=0;
    vector<ll> b(n);
    for(ll i=0 ;i<n;i++)
    {
        cin >> a[i];
    }
    for(ll i=0 ;i<n;i++)
    {
        cin >> b[i];
    }
    for(ll i=0 ;i<n;i++)
    {
        if(a[i]==1&&b[i]==0)
        {
            ans1++;
        }
        else if(a[i]==0&&b[i]==1)
        {
            ans2++;
        }
    }
    if(ans1==0)
    {
        cout<<-1<<endl;
    }
    else if(ans2==0)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<ans2/ans1 + 1<<endl;
    }
 
 
}
 
int main()
{
    fast;
	ll t;
	t=1;
//    cin>>t;
	while(t--)
    {
        solve();
    }
 
 
	return 0;
}
