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
//	t=1;
	cin>>t;
	while(t--)
    {
 
      ll n,k;cin>>n>>k;
      for(ll i=0 ; i<n ; i++)
      {
          if(i%3==0)
          {
              cout<<"a";
          }
          else if(i%3==1)
          {
              cout<<"b";
          }
          else
          {
              cout<<"c";
          }
      }
      cout<<endl;
    }
 
	return 0;
}