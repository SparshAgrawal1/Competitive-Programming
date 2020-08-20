#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;


int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    string s;
	    cin>>s;
	    unordered_map<ll,ll> m;
	    for(ll i=0 ; i<s.length() ; i++)
	    {
	        m[s[i]]++;
	    }
	    bool flag=true;
	    for(auto x:m)
	    {
	        if(x.second%2!=0)
	        {
	            flag=false;
	            break;
	        }
	    }
	    if(flag==true)
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO"<<endl;
	    }
	}
	return 0;
}
