#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
void solve()
{
	string s;
	cin >> s;
	string a="";
	string b="";
	ll ca=0;
	ll cb=0;
	for(ll i=0;i<s.length();i++)
	{
		if(isupper(s[i]))
            cb++;
		else
            ca++;
		a+=tolower(s[i]);
		b+=toupper(s[i]);
	}
	if(ca>=cb)
        cout<<a;
    else
        cout<<b;
 
}
 
int main()
{
    solve();
	return 0;
}