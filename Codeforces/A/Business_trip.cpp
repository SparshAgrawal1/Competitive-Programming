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
	  vector<int> a;
	  for(ll i=0;i<12;i++)
      {
	     ll x;
	     cin>>x;
	    a.push_back(x);
      }
	   sort(a.begin(),a.end());
	   ll s=0;
	  ll count=0;
	   for(int i=11;i>=0;i--)
        {
	       if(s>=n)
	       {
	           break;
	        }
	        else
	        {
	            count++;
	           s+=a[i];
	        }
	     }
	     if(s<n)
         {
	        cout<<-1;
	     }
	     else
         {
             cout << count <<endl;
          }
	return 0;
 
}