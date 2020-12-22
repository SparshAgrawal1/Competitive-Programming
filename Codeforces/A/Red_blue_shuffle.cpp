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
    ll n;cin>>n;
    string s1,s2;
    cin>>s1;
    cin>>s2;
//    sort(s1.begin(),s1.end(),greater<char>());
//    sort(s2.begin(),s2.end(),greater<char>());
    ll l=0;
    for(ll i=0 ; i<n ; i++)
    {
        ll l1=s1[i]-'0';
        ll l2=s2[i]-'0';
        if(l1>l2)
        {
            l++;
        }
        else if(l1<l2)
        {
            l--;
        }
    }
    if(l==0)
    {
        cout<<"EQUAL"<<endl;
    }
    else if(l>0)
    {
        cout<<"RED"<<endl;
 
    }
    else
    {
        cout<<"BLUE"<<endl;
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
