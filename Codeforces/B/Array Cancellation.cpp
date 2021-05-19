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
    cin>>n;
    ll a[n];
    vector<pair<ll,ll>> v1,v2;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            v1.push_back({a[i],i+1});
        }
        else if(a[i]>0)
        {
            v2.push_back({a[i],i+1});
        }
    }
 
    ll i=0;
    ll j=0;
    while(i<v2.size()&&j<v1.size())
    {
                if(v1[j].second>v2[i].second)
                {
                    if(abs(v1[j].first)>v2[i].first)
                    {
                        v1[j].first+=v2[i].first;
                        v2[i].first=0;
                        i++;
                    }
                    else if(abs(v1[j].first)==v2[i].first)
                    {
                        v2[i].first=0;
                        v1[j].first=0;
                        j++;
                        i++;
                    }
                    else
                    {
                        v2[i].first+=v1[j].first;
                        v1[j].first=0;
                        j++;
                    }
 
                }
                else
                {
                    j++;
                }
    }
    ll ans=0;
    for(auto x:v2)
    {
          ans+=x.first;
//        cout<<x.first<<" ";
    }
    cout<<ans<<endl;
 
 
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