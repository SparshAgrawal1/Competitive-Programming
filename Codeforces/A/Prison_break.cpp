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
    ll n,m,r,c;
    cin>>n>>m>>r>>c;
    ll l1=1;ll l2=1;
    ll l3=1;ll l4=m;
    ll l5=n;ll l6=1;
    ll l7=n;ll l8=m;
    ll p1=abs(l1-r)+abs(c-l2);
    ll p2=abs(l3-r)+abs(c-l4);
    ll p3=abs(l5-r)+abs(c-l6);
    ll p4=abs(l7-r)+abs(c-l8);
    cout<<max(max(p1,p2),max(p3,p4))<<endl;
 
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