#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() {
    
	string s;
	cin>>s;
	set<ll> m;
	for(ll i=0 ; i<s.length() ; i++)
	{
	    m.insert(s[i]);
	}
	if(m.size()%2==0)
	{
	    cout << "CHAT WITH HER!"<<endl;
	}
	else
	{
	    cout << "IGNORE HIM!" <<endl;
	    
	}
	return 0;
}