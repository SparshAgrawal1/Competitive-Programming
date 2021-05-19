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
    ll h=-1;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    string s1="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    cout<<s1<<endl;
    bool flag=false;
    for(ll i=0 ; i<n ; i++)
    {
        if(flag==false)
        {
                if(s1[a[i]]!='b')s1[a[i]]='b';
                else
                {
                    s1[a[i]]='z';
                }
        }
        else
        {
            if(s1[a[i]]!='z')s1[a[i]]='z';
                else
                {
                    s1[a[i]]='b';
                }
        }
        flag=!flag;
 
        cout<<s1<<endl;
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
