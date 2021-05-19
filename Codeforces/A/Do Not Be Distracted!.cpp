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
    string s;
    cin>>s;
    map<ll,ll> m;
    set<char> c;
    ll l=-1;
    bool flag=true;
    for(ll i=0 ; i<n ; i++)
    {
        if(l==-1)
        {
            c.insert(s[i]);
            l=i;
        }
        else
        {
            if(s[i]!=s[i-1])
            {
                if(c.find(s[i])==c.end())
                {
                    c.insert(s[i]);
                }
                else
                {
                    flag=false;
                    break;
                }
            }
 
        }
 
    }
    if(flag==false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
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