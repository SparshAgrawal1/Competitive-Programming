#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() {
    map<ll,ll> m;
	string s1;
	cin>>s1;
	for(ll i=0 ; i<s1.length() ; i++)
	{
	    m[s1[i]]++;
	}
	string s2;
	cin>>s2;
	for(ll i=0 ; i<s2.length() ; i++)
	{
	    m[s2[i]]++;
	}
	string s3;
	cin>>s3;
	for(ll i=0 ; i<s3.length() ; i++)
	{
	    m[s3[i]]--;
	    if(m[s3[i]]==0)
	    {
	        m.erase(s3[i]);
	    }
	}
	if(m.size()==0)
	{
	    cout << "YES" << endl;
	}
	else
	{
	    cout << "NO" << endl;
	}
	return 0;
}