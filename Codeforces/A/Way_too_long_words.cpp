#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() {
    
	ll t;cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    ll n=s.length();
	    if(n<=10)
	    {
	        cout <<s<<endl;
	    }
	    else
	    {
	        cout << s[0]<<n-2<<s[n-1]<<endl;
	    }
	}
	return 0;
}