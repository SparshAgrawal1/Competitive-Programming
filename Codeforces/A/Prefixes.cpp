#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
      fast;
      ll n;cin>>n;
      string s;
      cin>>s;
        ll ans=0;
	  for(ll i=0;i<n;i+=2)
      {
	       if(s[i]==s[i+1])
	       {
		       if(s[i]=='a')
		           s[i]='b';
		       else
		           s[i]='a';
		       ans++;
	        }
	}
	cout<<ans<<endl;
	cout<<s<<endl;
    return 0;
 
}