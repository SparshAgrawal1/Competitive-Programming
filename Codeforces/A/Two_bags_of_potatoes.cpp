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
 
      ll y,k,n;
      cin>>y>>k>>n;
      vector<ll> v;
      ll x=y%k;
      ll z=k-x;
      while(z+y<=n)
      {
          v.push_back(z);
          z=z+k;
      }
      if(v.size()==0)
      {
          cout <<-1<<endl;
      }
      else
      {
          for(auto x:v)
          {
              cout <<x << " ";
          }
          cout << endl;
      }
	return 0;
 
}