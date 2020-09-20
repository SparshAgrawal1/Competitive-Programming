#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define MAX 1000
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
bool isSubSequence(string s1, string s2, ll m, ll n)
{
    if (m == 0) return true;
    if (n == 0) return false;
 
    if (s1[m-1] == s2[n-1])
        return isSubSequence(s1, s2, m-1, n-1);
 
    return isSubSequence(s1, s2, m, n-1);
}
 
void solve()
{
 
    ll n;cin>>n;
    ll a[n];
    vector<ll> v1,v2,v3;
    set<ll> s;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        if(s.find(a[i])==s.end())
        {
            if(a[i]<0)
            {
                v1.push_back(a[i]);
            }
            else
            {
                v2.push_back(a[i]);
            }
            s.insert(a[i]);
        }
        else
        {
            v3.push_back(a[i]);
        }
 
    }
    sort(a,a+n);
	ll l = (n-1)/2;
	ll h = l+1;
	while(l>=0)
    {
 
        cout<<a[l]<<" ";
        l=l-1;
		if(h<n)
		{
            cout<<a[h]<<" ";
            h=h+1;
        }
	}
	cout<<endl;
 
}
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
 
    return 0;
}