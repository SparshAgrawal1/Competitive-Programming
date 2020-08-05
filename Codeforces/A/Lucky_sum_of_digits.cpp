#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    if(a.first==b.first)
    {
        return(a.second<b.second);
    }
    return (a.first > b.first);
}
 
int main()
{
      fast;
      ll n;
      cin>>n;
      ll count=0;
      ll a=4;
      ll b=7;
      vector<ll> v;
      while(n%7!=0&&n>0)
      {
          v.push_back(4);
          n=n-4;
      }
      if(n%7!=0)
      {
          cout <<-1<<endl;
      }
      else
      {
          while(n>0)
          {
              v.push_back(7);
              n=n-7;
          }
          for(auto x:v)
          {
              cout<<x;
          }
          cout << endl;
      }
 
 
 
 
	return 0;
 
}