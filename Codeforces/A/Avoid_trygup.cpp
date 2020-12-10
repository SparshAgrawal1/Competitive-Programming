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
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
 
int main()
{
	fast;
	ll t;
	cin>>t;
	while(t--)
    {
      ll n;
      cin>>n;
      string s;
      cin>>s;
      sort(s.begin(),s.end());
      cout<<s<<endl;
 
    }
 
	return 0;
}