#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() {
    ll n;cin>>n;
    map<string,ll> m;
    ll count=0;
    string a;
    while(n--)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto x:m)
    {
        if(x.second>count)
        {
            count=x.second;
            a=x.first;
        }
    }
    cout << a << endl;
	return 0;
}