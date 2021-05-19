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
    if(n==2)
    {
        cout<<-1<<endl;
    }
    else if(n==1)
    {
        cout<<1<<endl;
    }
    else
    {
        ll a[n][n]={-1};
        ll l=n*n;
        ll k=1;
        for(ll i=0 ; i<n ; i++)
        {
            for(ll j=0 ; j<n ; j++)
            {
                a[i][j]=k;
                k+=2;
                if(k>l)
                {
                    k=2;
                }
            }
        }
        for(ll i=0 ; i<n ; i++)
        {
            for(ll j=0 ; j<n ; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
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