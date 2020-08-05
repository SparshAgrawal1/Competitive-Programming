#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
      fast;
 
      ll n;
      cin>>n;
      map<ll,ll,greater<ll>> m;
      for(ll i=0 ; i<n ; i++)
      {
          ll a;cin>>a;
          m[a]++;
      }
      vector<pair<ll,ll>> v;
       for(auto x:m)
       {
           v.push_back({x.first,x.second});
       }
       if(v.size()==1)
       {
           cout << 0 << " "<<((v[0].second)*(v[0].second-1))/2<<endl;
       }
       else
       {
           cout << v[0].first-v[v.size()-1].first << " "<<v[v.size()-1].second*v[0].second<<endl;
       }
 
	return 0;
 
}