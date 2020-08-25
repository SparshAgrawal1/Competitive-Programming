#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
typedef double db;
 
int main()
{
    fast;
	set<char> s;
    char c;
    while(cin >>c)
    {
        if(c>='a'&&c<='z')
        s.insert(c);
    }
    cout<<s.size();
	return 0;
}